#include <stdio.h>

int main()
{
	FILE* mission_out;  //read from mission
	FILE* mission_in;   //write to mission
	char input_message, input_type;
	char* input_args;
	bool quit;

	mission_out = fopen("./missionout","r");
	mission_in = fopen("./missionin", "w");
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
				//stuff
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
 
