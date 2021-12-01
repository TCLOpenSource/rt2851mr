cmake_minimum_required(VERSION 2.8)

project (RTK_Common)

#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)
##############################################################
## Import RTK cmake configs
##############################################################
if(NOT DEFINED ENV{RTK_CMAKE_CONFIG})
  message(FATAL_ERROR "ENV{RTK_CMAKE_CONFIG} is not defined")
endif()

include($ENV{RTK_CMAKE_CONFIG})
##############################################################

add_library(rtk_common SHARED
	IPC/src/RPCstruct.c
	IPC/src/SVCFunc.c
	IPC/src/ClientStub.c
	IPC/src/rpcapi.c
	IPC/src/RPCProxy.c
	IPC/src/rpcstubapi.c
	IPC/src/xdr/xdr.c
	IPC/src/xdr/xdr_mem.c
	IPC/src/xdr/xdr_array.c
	IPC/src/xdr/xdr_float.c
	IPC/src/xdr/xdr_process.c
	IPC/src/xdr/xdr_ref.c
	IPC/src/xdr/xdr_sizeof.c
	IPC/generate/src/system/RPCBaseDS_xdr.c
	IPC/generate/src/system/AudioRPC_Agent_svc.c
	IPC/generate/src/system/AudioRPC_System_clnt.c
	IPC/generate/src/system/AudioRPC_Agent_xdr.c
	IPC/generate/src/system/AudioRPC_System_xdr.c
	IPC/generate/src/system/AudioRPCBaseDS_xdr.c
	IPC/generate/src/system/VideoRPC_Agent_svc.c
	IPC/generate/src/system/VideoRPC_System_clnt.c
	IPC/generate/src/system/VideoRPC_Agent_xdr.c
	IPC/generate/src/system/VideoRPC_System_xdr.c
	IPC/generate/src/system/VideoRPCBaseDS_xdr.c
        IPC/generate/src/system/SecureRPC_Agent_svc.c
        IPC/generate/src/system/SecureRPC_System_clnt.c
        IPC/generate/src/system/SecureRPC_Agent_xdr.c
        IPC/generate/src/system/SecureRPC_System_xdr.c
	IPC/generate/src/system/SecureRPCBaseDS_xdr.c
)

target_include_directories(rtk_common PRIVATE
	## OSAL
	${CMAKE_CURRENT_SOURCE_DIR}/../../include/utils
	## Logger
	${CMAKE_CURRENT_SOURCE_DIR}/../../include/libs
	include
	IPC/include
	IPC/include/xdr
	IPC/generate/include/system
)

target_include_directories(rtk_common PUBLIC
	$<INSTALL_INTERFACE:include>
)

install(TARGETS rtk_common
        EXPORT rtk_common
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
)
install (EXPORT rtk_common DESTINATION lib)
install (DIRECTORY include/ DESTINATION include/common)
install (DIRECTORY IPC/include/ DESTINATION include/common/IPC)
install (DIRECTORY IPC/generate/include/system/ DESTINATION include/common/IPC/generate/include/system)

