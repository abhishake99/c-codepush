from pydub import AudioSegment
import os

def convert_to_wav(input_folder, output_folder):
    # Create the output folder if it doesn't exist
    os.makedirs(output_folder, exist_ok=True)

    # Get a list of all files in the input folder
    files = os.listdir(input_folder)

    # Iterate over each file in the input folder
    for file_name in files:
        if file_name.endswith('.mp3'):
            # Load the MP3 file
            mp3_file = os.path.join(input_folder, file_name)
            audio = AudioSegment.from_mp3(mp3_file)

            # Construct the output file path
            wav_file = os.path.join(output_folder, file_name[:-4] + '.wav')

            # Export the audio as WAV format
            audio.export(wav_file, format='wav')

            print(f'Converted {file_name} to {wav_file}')

# Set the input and output folders
input_folder = 'input_folder'
output_folder = 'output_folder'

# Call the conversion function
convert_to_wav(input_folder, output_folder)

