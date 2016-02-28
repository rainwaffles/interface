#include <stdio.h>

int main()
{
	//in means input from stream
	//out means output to stream

	//mission
	FILE* mission_in;
	FILE* mission_out;

	//state
	//used for both command and query
	FILE* state_in;
	FILE* state_out;
	//image microprocessor
	FILE* vision_in;
	FILE* vision_out;

	//ultrasonic
	FILE* usonic_in;    
	FILE* usonic_out;

	char input_message, input_type; //from mission_in
	bool quit;

	mission_in  = fopen("./missionin",  "r");
	mission_out = fopen("./missionout", "w");
	vision_in   = fopen("./visionin",   "r");
	vision_out  = fopen("./visionout",  "w");
	usonic_in   = fopen("./usonicin",   "r");
	usonic_out  = fopen("./usonicout",  "w");

	quit = false;
	while (!quit) 
	{
		fscanf(mission_in, "%c", &input_message);
		switch (input_message)
		{
		//command
		case 'c':
			fscanf(mission_in, "%c", &input_type);
			switch (input_type)
			{
			//set state
			case 's':
				float yaw, pitch, roll, depth, x, y;
				fscanf(mission_in, "%f %f %f %f %f %f", &yaw, &pitch, &roll, &depth, &x, &y);
				//send 'c' first to indicate command
				fprintf(state_out, "%c", 'c');
				fprintf(state_out, "%f %f %f %f %f %f", yaw, pitch, roll, depth, x, y);
				break;
			//drop
			case 'd':
				//stuff
				break;
			//shoot torpedo
			case 't':
				//stuff
				break;
			//grabber
			case 'g':
				//stuff
				break;
			}
			break;
		//query
		case 'q':
			fscanf(mission_in, "%c", &input_type);
			switch(input_type)
			{
			//state
			case 's':
				float yaw, pitch, roll, depth, x, y;
				//send 'q' to indicate query
				fprintf(state_out, "%c", 'q');
				fscanf(state_in, "%f %f %f %f %f %f", &yaw, &pitch, &roll, &depth, &x, &y);
				fprintf(mission_out, "%f %f %f %f %f %f", yaw, pitch, roll, depth, x, y);
				break;
			//image
			case 'i':
				//stuff
				break;
			//vision
			case 'v':	
				//return a bunch of values

				/*
				possible tasks:
				g | gate
				b | buoys
				m | maneuvering  !
				d | bins
				t | torpedoes    !
				h | hydrophones  !
				!=not sure if these are actually part of vision
				*/
				char task;
				int num_values;
				float value;
				fscanf(mission_in, "%c", &task);
				fprintf(vision_out, "%c", task);
				fscanf(vision_in, "%i", &num_values);
				for (int i = 0; i < num_values; i++) {
					fscanf(vision_in, "%f", &value);
					fprintf(mission_out, "%f", value);
				}
				break;
			//ultrasonic
			case 'u':
				//return distance

				//print 'q' to indicate query
				int distance;
				fprintf(usonic_out, "%c", 'q');
				fscanf(usonic_in, "%i", &distance);
				fprintf(mission_out, "%i", distance);
				break;
			//modeling
			case 'm':
				//stuff
				break;
			}
			break;
		}
	}

	return 0;
}
 
