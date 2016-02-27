#include <stdio.h>

int main()
{
	FILE* mission_in;   //read from mission
	FILE* mission_out;  //write to mission

	FILE* vision_in;    //read from image microprocessor
	FILE* vision_out;   //write to image microprocessor

	char input_message, input_type;
	bool quit;

	mission_in  = fopen("./missionin",  "r");
	mission_out = fopen("./missionout", "w");
	vision_in   = fopen("./visionin",   "r");
	vision_out  = fopen("./visionout",  "w");
	quit = false;
	while (!quit) 
	{
		fscanf(mission_in, "%c", &input_message);
		switch (input_message)
		{
		case 'c':
			fscanf(mission_in, "%c", &input_type);
			switch (input_type)
			{
			case 's':
				//stuff
				break;
			case 'd':
				//stuff
				break;
			case 't':
				//stuff
				break;
			case 'g':
				//stuff
				break;
			}
			break;
		case 'q':
			fscanf(mission_in, "%c", &input_type);
			switch(input_type)
			{
			case 's':
				//stuff
				break;
			case 'i':
				//stuff
				break;
			case 'v':
				char task;
				int num_values;
				float value;
				fscanf(mission_in, "%c", &task);
				fprintf(vision_out, "%c", task);
				fscanf(vision_in, "%i", &
				for (int i = 0; i < num_values; i++) {
					fscanf(vision_in, "%f", &value);
					fprintf(mission_out, "%f", value);
				}
				break;
			case 'u':
				//stuff
				break;
			case 'm':
				//stuff
				break;
			}
			break;
		}
	}

	return 0;
}
 
