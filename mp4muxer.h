#ifndef __FFENCODER_H_
#define __FFENCODER_H_

// ����ͷ�ļ�
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ���Ͷ���
typedef struct
{
    // output params
    char *filename;
    int   usefd;
    int   valfd;
    int   audio_bitrate;
    int   audio_channel_layout;
    int   audio_sample_rate;
    int   video_bitrate;
    int   video_width;
    int   video_height;
    int   video_frame_rate;
} MP4MUXER_PARAMS;

// ��������
void* mp4muxer_init (MP4MUXER_PARAMS *params);
void  mp4muxer_free (void *ctxt);
int   mp4muxer_audio(void *ctxt, int flags, void *data, int size, int64_t pts);
int   mp4muxer_video(void *ctxt, int flags, void *data, int size, int64_t pts);

#ifdef __cplusplus
}
#endif

#endif


