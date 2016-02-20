/*

.___        __                 _____                            
|   | _____/  |_  ____________/ ____\____    ____  ____   ______
|   |/    \   __\/ __ \_  __ \   __\\__  \ _/ ___\/ __ \ /  ___/
|   |   |  \  | \  ___/|  | \/|  |   / __ \\  \__\  ___/ \___ \
|___|___|  /__|  \___  >__|   |__|  (____  /\___  >___  >____  >

*/

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
	while (!quit) {
		fscanf(mission_out, "%c", &input_message);
		switch (input_message) {
			case 'c': //stuff 
				break;
			case 'q': //stuff
				break;
		}
	}

	return 0;
}
 
