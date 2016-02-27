#include <stdio.h>

int main()
{
	FILE* mission_out;  //read from mission
	FILE* mission_in;   //write to mission

	FILE* vision_out;    //read from image microprocessor
	FILE* vision_in;     //write to image microprocessor

	char input_message, input_type;
	bool quit;

	mission_out = fopen("./missionout", "r");
	mission_in  = fopen("./missionin", "w");
	vision_out  = fopen("./visionout", "r");
	vision_in   = fopen("./visionin", "w");
	quit = false;
	while (!quit) 
	{
		fscanf(mission_out, "%c", &input_message);
		switch (input_message)
		{
		case 'c':
			fscanf(mission_out, "%c", &input_type);
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
			fscanf(mission_out, "%c", &input_type);
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
				fscanf(vision_out, "%c %i", &task, &num_values);
				for (int i = 0; i < num_values; i++) {
					fscanf(vision_out, "%f", &value);
					fprintf(mission_in, "%f", value);
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
 
