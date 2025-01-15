import vlc

# Create a VLC media player instance
player = vlc.MediaPlayer("learning/python/music/Mehrama - Pritam.mp3")

# Play the music
player.play()

input("Press Enter to stop the music...")
player.stop()