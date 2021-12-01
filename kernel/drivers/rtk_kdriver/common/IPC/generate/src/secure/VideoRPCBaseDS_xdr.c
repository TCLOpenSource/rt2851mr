/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <VideoRPCBaseDS.h>
#include <rpc_common.h>

bool_t
xdr_RPC_RINGBUFFER (XDR *xdrs, RPC_RINGBUFFER *objp)
{
	 if (!xdr_long (xdrs, &objp->instanceID))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->pinID))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->readPtrIndex))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->pRINGBUFF_HEADER))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_VF_TYPE (XDR *xdrs, VIDEO_VF_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_LOW_DELAY (XDR *xdrs, VIDEO_LOW_DELAY *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_IMG_TYPE (XDR *xdrs, VIDEO_IMG_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RATE_CONTROL_MODE (XDR *xdrs, VIDEO_RATE_CONTROL_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_SOURCE (XDR *xdrs, VIDEO_SOURCE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_JPEG_ROTATION (XDR *xdrs, VIDEO_JPEG_ROTATION *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_JPEG_MIRROR (XDR *xdrs, VIDEO_JPEG_MIRROR *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_IMG_TARGET_FORMAT (XDR *xdrs, IMG_TARGET_FORMAT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_IMG_TARGET_POSITION (XDR *xdrs, IMG_TARGET_POSITION *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_IMG_SOURCE_PICTURE_SELECT (XDR *xdrs, IMG_SOURCE_PICTURE_SELECT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_IMG_STATUS (XDR *xdrs, IMG_STATUS *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_COLOR_FMT (XDR *xdrs, VIDEO_COLOR_FMT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_TRANSITION_TYPE (XDR *xdrs, VIDEO_TRANSITION_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_FORMAT (XDR *xdrs, VIDEO_FORMAT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_STREAM_TYPE (XDR *xdrs, VIDEO_STREAM_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_DECODER_CC_BYPASS_MODE (XDR *xdrs, VIDEO_DECODER_CC_BYPASS_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_CMPRS_RATIO (XDR *xdrs, CMPRS_RATIO *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ENUM_VIDEO_SUBPIC_INFO_TYPE (XDR *xdrs, ENUM_VIDEO_SUBPIC_INFO_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ENUM_DVD_VIDEO_ENCODER_OUTPUT_INFO_TYPE (XDR *xdrs, ENUM_DVD_VIDEO_ENCODER_OUTPUT_INFO_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ENUM_VIDEO_ENCODER_RC_MODE (XDR *xdrs, ENUM_VIDEO_ENCODER_RC_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ENUM_VIDEO_MSG_INFO_TYPE (XDR *xdrs, ENUM_VIDEO_MSG_INFO_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_STANDARD (XDR *xdrs, VO_STANDARD *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_PEDESTAL_TYPE (XDR *xdrs, VO_PEDESTAL_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_TV_TYPE (XDR *xdrs, VO_TV_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_HDMI_MODE (XDR *xdrs, VO_HDMI_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_HDMI_AUDIO_SAMPLE_FREQ (XDR *xdrs, VO_HDMI_AUDIO_SAMPLE_FREQ *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_HDMI_COLOR_FMT (XDR *xdrs, VO_HDMI_COLOR_FMT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_VBI_ASPECT_RATIO (XDR *xdrs, VO_VBI_ASPECT_RATIO *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_VBI_COPY_MODE (XDR *xdrs, VO_VBI_COPY_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_VBI_APS (XDR *xdrs, VO_VBI_APS *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_VBI_SUBTITLE_MODE (XDR *xdrs, VO_VBI_SUBTITLE_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_VIDEO_PLANE (XDR *xdrs, VO_VIDEO_PLANE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_RESCALE_MODE (XDR *xdrs, VO_RESCALE_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_DEINT_MODE (XDR *xdrs, VO_DEINT_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_OSD_LPF_TYPE (XDR *xdrs, VO_OSD_LPF_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_OSD_COLOR_FORMAT (XDR *xdrs, VO_OSD_COLOR_FORMAT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_OSD_RGB_ORDER (XDR *xdrs, VO_OSD_RGB_ORDER *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_GRAPHIC_PLANE (XDR *xdrs, VO_GRAPHIC_PLANE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_GRAPHIC_STORAGE_MODE (XDR *xdrs, VO_GRAPHIC_STORAGE_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_PVIN_MODE (XDR *xdrs, PVIN_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_COLOR (XDR *xdrs, VO_COLOR *objp)
{
	 if (!xdr_u_char (xdrs, &objp->c1))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->c2))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->c3))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->isRGB))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_RECTANGLE (XDR *xdrs, VO_RECTANGLE *objp)
{
	 if (!xdr_short (xdrs, &objp->x))
		 return FALSE;
	 if (!xdr_short (xdrs, &objp->y))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->width))
		 return FALSE;
	 if (!xdr_u_short (xdrs, &objp->height))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_SUBPIC_COLORMAP (XDR *xdrs, VO_SUBPIC_COLORMAP *objp)
{
	 if (!xdr_u_char (xdrs, &objp->alpha3))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->alpha2))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->alpha1))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->alpha0))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->color3))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->color2))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->color1))
		 return FALSE;
	 if (!xdr_u_char (xdrs, &objp->color0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_SP_STREAM_TYPE (XDR *xdrs, SP_STREAM_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ENUM_TVD_VIDEO_FORMAT (XDR *xdrs, ENUM_TVD_VIDEO_FORMAT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ENUM_TVD_INPUT_FORMAT (XDR *xdrs, ENUM_TVD_INPUT_FORMAT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ENUM_TVD_YC_SEP_MODE (XDR *xdrs, ENUM_TVD_YC_SEP_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ENUM_TVD_VBI_DATA (XDR *xdrs, ENUM_TVD_VBI_DATA *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_TVE_BOARD_TYPE (XDR *xdrs, TVE_BOARD_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_BUFFER_TYPE (XDR *xdrs, VIDEO_BUFFER_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_DNR_MODE (XDR *xdrs, VIDEO_DNR_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_CODEC_CONTROL_BIT (XDR *xdrs, VIDEO_CODEC_CONTROL_BIT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_PHOTO_DEC_JPEG_CTRL (XDR *xdrs, VIDEO_PHOTO_DEC_JPEG_CTRL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_PHOTO_DEC_BITMAP_CTRL (XDR *xdrs, VIDEO_PHOTO_DEC_BITMAP_CTRL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_PHOTO_DEC_TIFF_CTRL (XDR *xdrs, VIDEO_PHOTO_DEC_TIFF_CTRL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_PHOTO_DEC_GIF_CTRL (XDR *xdrs, VIDEO_PHOTO_DEC_GIF_CTRL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_PHOTO_DEC_PNG_CTRL (XDR *xdrs, VIDEO_PHOTO_DEC_PNG_CTRL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_PHOTO_DEC_WEBP_CTRL (XDR *xdrs, VIDEO_PHOTO_DEC_WEBP_CTRL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_PHOTO_DEC_PSEUDOIMG_CTRL (XDR *xdrs, VIDEO_PHOTO_DEC_PSEUDOIMG_CTRL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_PHOTO_DEC_HEIF_CTRL (XDR *xdrs, VIDEO_PHOTO_DEC_HEIF_CTRL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_MIXER_WIN (XDR *xdrs, MIXER_WIN *objp)
{
	 if (!xdr_u_char (xdrs, &objp->winID))
		 return FALSE;
	 if (!xdr_short (xdrs, &objp->order))
		 return FALSE;
	 if (!xdr_short (xdrs, &objp->alpha))
		 return FALSE;
	 if (!xdr_VO_RECTANGLE (xdrs, &objp->dispWin))
		 return FALSE;
	 if (!xdr_VO_RECTANGLE (xdrs, &objp->clipSrcWin))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_YUV_FMT (XDR *xdrs, YUV_FMT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_CAP_FRAME_FMT (XDR *xdrs, CAP_FRAME_FMT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_CAP_IN_SEL (XDR *xdrs, CAP_IN_SEL *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_ENC_PROFILE (XDR *xdrs, VIDEO_ENC_PROFILE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_CHROMA_FMT (XDR *xdrs, VO_CHROMA_FMT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_3D_MODE_TYPE (XDR *xdrs, VO_3D_MODE_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_3D_OUTPUT_MODE (XDR *xdrs, VO_3D_OUTPUT_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_FORCE2D_MODE (XDR *xdrs, VO_FORCE2D_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_PANEL_3D_TYPE (XDR *xdrs, PANEL_3D_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_SOURCE_TYPE (XDR *xdrs, VO_SOURCE_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_FORCEBG_TYPE (XDR *xdrs, VO_FORCEBG_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_SCALER_AR_MODE (XDR *xdrs, VO_SCALER_AR_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_4K2K_MODE_TYPE (XDR *xdrs, VO_4K2K_MODE_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_OSD_4K2K_MODE_TYPE (XDR *xdrs, OSD_4K2K_MODE_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_HACK_CANVAS_MODE (XDR *xdrs, VO_HACK_CANVAS_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_DIRECT_VO_FRAME_QUEUE_SIZE_VALUE (XDR *xdrs, DIRECT_VO_FRAME_QUEUE_SIZE_VALUE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_DIRECT_VO_FRAME_FORMAT (XDR *xdrs, DIRECT_VO_FRAME_FORMAT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_DIRECT_VO_FRAME_LAYOUT (XDR *xdrs, DIRECT_VO_FRAME_LAYOUT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_DIRECT_VO_FRAME_SCAN_MODE (XDR *xdrs, DIRECT_VO_FRAME_SCAN_MODE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_DIRECT_VO_FRAME_CLOCK_TYPE (XDR *xdrs, DIRECT_VO_FRAME_CLOCK_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_DIRECT_VO_FRAME_FLAG (XDR *xdrs, DIRECT_VO_FRAME_FLAG *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_DIRECT_VO_FRAME_3D_TYPE (XDR *xdrs, DIRECT_VO_FRAME_3D_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VSGEN_IV_SRC (XDR *xdrs, VSGEN_IV_SRC *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RESOURCE_CORE_TYPE (XDR *xdrs, VIDEO_RESOURCE_CORE_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RENDER_MODE_TYPE (XDR *xdrs, VIDEO_RENDER_MODE_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VIDEO_RESOURCE_CTRL_TYPE (XDR *xdrs, VIDEO_RESOURCE_CTRL_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_VSC_SRC_TYPE (XDR *xdrs, VO_VSC_SRC_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_DIRECT_VO_FRAME_ORIENTATION (XDR *xdrs, DIRECT_VO_FRAME_ORIENTATION *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_RPC_VODMA_DDOMAIN_CHROMA_FMT (XDR *xdrs, RPC_VODMA_DDOMAIN_CHROMA_FMT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_RPC_SLR_AFD_TYPE (XDR *xdrs, RPC_SLR_AFD_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_HDR_TYPE (XDR *xdrs, HDR_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_VO_APP_TYPE (XDR *xdrs, VO_APP_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_HAL_VO_P_STATE_T (XDR *xdrs, HAL_VO_P_STATE_T *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_HAL_VO_P_PIXEL_FORMAT (XDR *xdrs, HAL_VO_P_PIXEL_FORMAT *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_HAL_VO_P_PANEL_TYPE (XDR *xdrs, HAL_VO_P_PANEL_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_HAL_VO_P_CFG_TYPE (XDR *xdrs, HAL_VO_P_CFG_TYPE *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_HAL_VO_P_SUPPORT_PIXEL_FORMAT_T (XDR *xdrs, HAL_VO_P_SUPPORT_PIXEL_FORMAT_T *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_HAL_VO_P_SUPPORT_PANEL_TYPE_T (XDR *xdrs, HAL_VO_P_SUPPORT_PANEL_TYPE_T *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_HAL_VO_P_FB_FRAMEBUFFER_PROPERTY_FLAGS_T (XDR *xdrs, HAL_VO_P_FB_FRAMEBUFFER_PROPERTY_FLAGS_T *objp)
{
	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}
