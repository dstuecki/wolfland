const string MUSIC_SOUNDSET 	= "";

const bool UseCustomMusic       = false;

modded class MissionMainMenu
{
	override void PlayMusic()
	{
        if ( UseCustomMusic )
        {
            if ( !m_MenuMusic )
            {
                SoundParams soundParams			= new SoundParams( MUSIC_SOUNDSET );
                SoundObjectBuilder soundBuilder	= new SoundObjectBuilder( soundParams );
                SoundObject soundObject			= soundBuilder.BuildSoundObject();
                soundObject.SetKind( WaveKind.WAVEMUSIC );
                m_MenuMusic = GetGame().GetSoundScene().Play2D(soundObject, soundBuilder);
                m_MenuMusic.Loop( true );
                m_MenuMusic.Play();
            }
        } else {
		    super.PlayMusic();
        }
	}
};