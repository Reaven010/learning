import time
import vlc

# List of lyrics with timestamps (in seconds) to sync with the song
ajj_din_chadheya_lyrics = [
    ("Ajj din chadheya",27),
    ("Tere rang warga", 32),
    ("Ajj din chadheya",33),
    ("Tere rang warga", 37),
    ("", 39),
    ("Phul sa hai khila", 42),
    ("aaj din",45),
    ("Rabba mere din yeh", 46),
    ("na dhale", 47),
    ("Woh jo mujhe khawab", 48),
    ("mein mile", 49),
    ("Use tu lagede abb gale", 50),
    ("Tenu dil da vasta", 51),
    ("Rabba aaya dar de yaar de", 55),
    ("Sara jahan chod chad ke", 57),
    ("Mere sapne sawar de", 59),
    ("Tennu dil da vasta", 61),
    ("",70),
    ("Ajj din chadheya", 66 +27),
    ("Tere rang warga", 70 + 27),
    ("", 74 + 27),
    ("Baksha gunaho ko", 78 + 27),
    ("Sun ke duwao ko", 82 + 27),
    ("Rabba pyaar hai", 86 + 27),
    ("Tune sab ko hi de diya", 90 + 27),
    ("Meri bhi aahon ko", 94 + 27),
    ("Sun le duwao ko", 98 + 27),
    ("Mujhko woh dila mene", 102 + 27),
    ("jisko hai dil diya", 106 + 27),
    ("Hoooo", 110 + 27),
    ("", 112 + 27),
    ("Baksha gunaho ko", 116 + 27),
    ("Sun ke duwao ko", 120 + 27),
    ("Rabba pyaar hai", 124 + 27),
    ("Tune sab ko hi de diya", 128 + 27),
    ("Meri bhi aahon ko", 132 + 27),
    ("Sun le duwao ko", 136 + 27),
    ("Mujhko woh dila mene", 140 + 27),
    ("jisko hai dil diya", 144 + 27),
    ("", 148 + 27),
    ("Aasmaan pe aasmaan", 152 + 27),
    ("uske de itna bata", 156 + 27),
    ("Woh jo mujhko dekh", 160 + 27),
    ("ke hase", 164 + 27),
    ("Pana chahun raat din", 168 + 27),
    ("jise", 172 + 27),
    ("Rabba mere naam", 176 + 27),
    ("kar use", 180 + 27),
    ("Tenu dil da vasta", 184 + 27),
    ("", 188 + 27),
    ("Ajj din chadheya", 192 + 27),
    ("Tere rang warga", 196 + 27),
    ("", 200 + 27),
    ("Manga jo mera hai", 204 + 27),
    ("Jata kya tera hai", 208 + 27),
    ("Mene kaun si", 212 + 27),
    ("Tujhse jannat manga li", 216 + 27),
    ("Kaisa khuda hai tu", 220 + 27),
    ("Bas naam ka hai tu", 224 + 27),
    ("Rabba jo teri itni", 228 + 27),
    ("si bhi na chali", 232 + 27),
    ("Haaanaaa", 236 + 27),
    ("", 240 + 27),
    ("Manga jo mera hai", 244 + 27),
    ("Jata kya tera hai", 248 + 27),
    ("Mene kaun si", 252 + 27),
    ("Tujhse jannat manga li", 256 + 27),
    ("Kaisa khuda hai tu", 260 + 27),
    ("Bas naam ka hai tu", 264 + 27),
    ("Rabba jo teri itni", 268 + 27),
    ("si bhi na chali", 272 + 27),
    ("", 276 + 27),
    ("Chahiye jo mujhe", 280 + 27),
    ("Kar de tu mujhko ata", 284 + 27),
    ("Jeeti rahi saltanat teri", 288 + 27),
    ("Jeeti rahe ashiqui meri", 292 + 27),
    ("Dede mujhe zindagi meri", 296 + 27),
    ("Tenu dil da vasta", 300 + 27),
    ("", 304 + 27),
    ("Rabba mere din yeh", 308 + 27),
    ("na dhale", 312 + 27),
    ("Woh jo mujhe khawab", 316 + 27),
    ("mein mile", 320 + 27),
    ("Use tu lagede abb gale", 324 + 27),
    ("Tenu dil da vasta", 328 + 27),
    ("", 332 + 27),
    ("Rabba aaya dar de yaar de", 336 + 27),
    ("Sara jahan chod chad ke", 340 + 27),
    ("Mere sapne sawar de", 344 + 27),
    ("Tennu dil da vasta", 348 + 27),
    ("", 352 + 27),
    ("Ajj din chadheya", 356 + 27),
    ("Tere rang warga", 360 + 27),
    ("Ajj din chadheya", 364 + 27),
    ("Tere rang warga", 368 + 27),
    ("Ajj din chadheya", 372 + 27),
    ("Tere rang warga", 376 + 27),
    ("Din chadheya", 380 + 27),
    ("Tere rang warga", 384 + 27),
    ("Ajj din chadheya", 388 + 27),
]

# Function to display the lyrics with timing
def display_lyrics_with_timing(lyrics):
    start_time = time.time()
    for line, timestamp in lyrics:
        while time.time() - start_time < timestamp:
            time.sleep(0.1)  # Wait until the correct timestamp
        print(line)

# Play music using VLC
player = vlc.MediaPlayer("python/spotifydown.com - Ajj Din Chadheya - Rahat Fateh Ali Khan.mp3")
player.play()
print("Playing song... Synchronizing lyrics...")

# Display lyrics synchronized with the song
display_lyrics_with_timing(ajj_din_chadheya_lyrics)

input("Press Enter to stop the music...")
player.stop()
