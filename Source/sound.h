//HEADER_GOES_HERE
#ifndef __SOUND_H__
#define __SOUND_H__

extern float sound_cpp_init_value;
extern IDirectSoundBuffer *DSBs[8];
extern IDirectSound *sglpDS;
extern char gbSndInited;
extern int sglMusicVolume;
extern int sglSoundVolume;
extern HMODULE hDsound_dll; // idb
extern void *sgpMusicTrack;
extern IDirectSoundBuffer *sglpDSB;

void __cdecl sound_cpp_init();
void __fastcall snd_update(bool bStopAll);
void __fastcall snd_stop_snd(TSnd *pSnd);
bool __fastcall snd_playing(TSnd *pSnd);
void __fastcall snd_play_snd(TSnd *pSnd, int lVolume, int lPan);
IDirectSoundBuffer *__fastcall sound_dup_channel(IDirectSoundBuffer *DSB);
bool __fastcall sound_file_reload(TSnd *sound_file, IDirectSoundBuffer *DSB);
TSnd *__fastcall sound_file_load(char *path);
void __fastcall sound_CreateSoundBuffer(TSnd *sound_file);
void __fastcall sound_file_cleanup(TSnd *sound_file);
void __fastcall snd_init(HWND hWnd);
void __fastcall sound_load_volume(char *value_name, int *value);
void __fastcall sound_create_primary_buffer(int music_track);
int __fastcall sound_DirectSoundCreate(GUID *guid, IDirectSound **DS, int always_null);
void __cdecl sound_cleanup();
void __fastcall sound_store_volume(char *key, int value);
void __cdecl music_stop();
void __fastcall music_start(_music_id nTrack);
void __fastcall sound_disable_music(bool disable);
int __fastcall sound_get_or_set_music_volume(int volume);
int __fastcall sound_get_or_set_sound_volume(int volume);

/* data */

extern int sound_inf; // weak

/* rdata */

extern char gbMusicOn; // weak
extern char gbSoundOn; // weak
extern char gbDupSounds; // weak
extern _music_id sgnMusicTrack;
extern char *sgszMusicTracks[6];
extern RECT8 QSRect[2]; /* psx version? */

#endif /* __SOUND_H__ */
