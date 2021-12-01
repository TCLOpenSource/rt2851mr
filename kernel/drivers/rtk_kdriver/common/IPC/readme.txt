HOW TO install RPC procedure:

 (NOTE***) Demo Machine �W�w���˦n���s�� RPC module, ���ݦA�t�~�w��
           �@��ϥΪ̥i���L���q
(�@) Install Linux's RPC Module

 (1) �Ѷ} linux-test-module.tar.gz
     �b rpcjacky/TestDriver/ ���U, �� make clean; make
     �p�G����, �s�� Makefile , 
     ���� KERNELDIR ���ܼ�, �n���h linux kernel source code �����|... (�S��? �h�� kernel src...)

 (2) make ���\����� insmod ./RPC.o (insert module)...
     ���ӷ|���@�� warning, ���βz�L
     �ݨ� Module RPC loaded, with warnings ���ӴN�O insert �n�F

 (3) more /proc/devices | grep RPC
     �p�G�����X, �N�⥦�O�_�� (���]�O 254)
 
 (4) �إؿ� /dev/rpc
     cd /dev/rpc;  
     �έ�誺���X�� 2 �� device
     mknod 0 c 254 1;
     mknod 1 c 254 2;         
     

====================================================================================

HOW TO use RPC procedure :

 (1) Run RPC module
     (Description) �p�G OS �� RPC module �٨S run �_��, �N�n��� run RPC module
 
 (2) <�s�� Script ��>
     (Description) �s��@�� script ��, �`�N program id �M version id �n�M�O�H���P!
                   �d�ҰѦ�  "VideoEncoder_System.x",      
                   �o�O Video Encoder �� system CPU �n�e�� Video CPU �һݪ� funciton �M data structure
                   �b script �e�X��, �i�[�J�@�� .insert <...>
                   �b generate �X�Ӫ� .h �ɤ�, �N�|���o�X�� #include...
     (example) 
            .insert <RPCBaseDS.h>
            struct AA {
              long sum;
              char t_char;
            }
            
            program ITest {
              version VERSION {
                 int VE_RPC_RequestWriteSpace(long)=1;
                 struct AA TestFunction(char)=2;
              }=0;
            }=0;
            
     (NOTE****) program ID �s���W�h�G  0~100 �� RPC library �ϥ�
                                     100~200 �� Video Team �ϥ�
                                     200~300 �� Audio Team �ϥ�
                                     300~400 �� System Team �ϥ�
  
 (3) <Run rpcgen �Ӳ��� code>
     (Description) �ؿ��b common/IPC/rpcgen, ���x�� Linux
                   cd rpcgen/;  �ק� Makefile, �Ӭݭn���� Linux �άO ROS ����
                   ���� ./rpcgen VideoEncoder_System.x
                   �|���� .h  _data.h  _svc.c _clnt.c _xdr.c �o�����ɮ�
  
 (4) <���� Function implement template>
     (Description) �o�ӨB�J���O����, ���p�G�ݭn���ͤ@�� �Q�I�s�ݹ�@�� template ��
                   �i�H�ϥΫ��O: ./rpcgen -Ss VideoEncoder_System.x 
                   �|�� template �L�b�ù��W
                   �ϥΫ��O ./rpcgen -Ss VideoEncoder_System.x > template.c
                   �N�|�ɤJ template.c �o���ɮ�
     
 (5) <�����ɮ׻���>
     (Description) _svc.c ��b�Q�I�s�����@�� (�d�ҬO src/Filters/VideoEncoder/agent/)
                   _clnt.c ��b�I�s�����@��  (�d�ҬO src/Filters/VideoEncoder/system/)     
                   .h _data.h _xdr.c �o�T���ɮ�, �I�s�ݩM�Q�I�s�ݳ��ݭn��
     
 (5) <�Q�I�s��: �{����@>
     (Desctiption) �s��Q�I�s�� function �ɮ� (�d�ҬO src/Filter/VideoEncoder/agent/SystemRPCFunction.cpp)
                   �p�G���b .x ���ҩw�q�� function name �O VE_RPC_RequestWriteSpace();
                   ���Q�I�s�ݬ۹����� function name �N�O VE_RPC_RequestWriteSpace_VERSION�Ʀr_svc();
     (NOTE***) �i�ϥ� (4) �B�J�Ӳ��� template ��
     (example) 
           int *
           VE_RPC_RequestWriteSpace_0_svc(long *argp, RPC_STRUCT *rpc) {
               static int result;    // NOTE*** �����ŧi�� static !!!!!!!
               result = 321;
               return &result;
           }
 
 (6) <�I�s�ݡG�ϥΤ�k>
     (Desctiption) �I�s�e, �O�o���ϥ� function: 
                   struct CLNT_STRUCT clnt = prepareCLNT(mode, PROGRAM NAME, VERSION NAME); 
                   �䤤 mode �� BLOCK_MODE, NONBLOCK_MODE, USE_INTR_BUF, USE_POLL_BUF   
     
                   �M��A�I�s function:  
                        return�Ѽ� = VE_RPC_RequestWriteSpace_0(&�ۭq�Ѽ�, &clnt);
                   �䤤 clnt �O���� prepareCLNT(); �o�쪺���G
     (example)
           int *result;
           long arg = 123;
        
           CLNT_STRUCT clnt = prepareCLNT(BLOCK_MODE | USE_POLL_BUF, ITest, Version);
           result = VE_RPC_RequestWriteSpace_0(&arg, &clnt);
        
           if (result) == (int *)-1)
               printf("function send error\n");
           else
               printf("function send success, return value: %d \n", *result);
                 
           free(result);     // NOTE*** ������� free result !!!!!!!
 
 (7) <���դ�k>
     (Desctiption) �H�� RPC alwayse listen �� dispatch thread �|�� OS boot �_�Ӫ��ɭ� run
                   ���O�{�b�����ڭ̤�ʥ[�J
     
                   Unit_test (�d�Ҧb src/Unit_test/DVDAuthoringTest/main.cpp)
                   �ݭn�I�s register function, 
                   ��o�� program ���U�i�h (�d�ҬO VIDEO_ENCODER_0_register();)
                   �٭n�O�o���U reply handler (�d�ҬO ReplyHandler_register();)
                   �M�� create RPCProxy �� Thread �� listen... 

     (example)
           struct REG_STRUCT * rnode = NULL;

           // �H�U�O register function ��
           rnode = (struct REG_STRUCT *)VIDEO_ENCODER_SYSTEM_0_register(rnode);  // Client program 0
           rnode = (struct REG_STRUCT *)VIDEO_ENCODER_AGENT_0_register(rnode);  // Client program 1
           rnode = (struct REG_STRUCT *)ReplyHandler_register(rnode);  // Reply Handler    
           
           initRPCProxy(rnode); // �N RPC listen �� dispatch thread run �_�� 
     
     
 (8) <link library>
     (Description) link ���ɭ�, �O�o�h�� library:  libRPC.a librtxdr.a
                   ���b common/IPC/src/ ���U�i�H generate �X��
      