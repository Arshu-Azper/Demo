//Cortney Tuley
//Project

#include<iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <time.h>
#include <chrono>
#include <thread>

using namespace std;
int main()
{

	srand(time(NULL));

	int set, gt, ic, play;
	int r = (rand() % 10) + 1;
	int f, k, buld, ew;
	int s, t, time, l;
	char opt1, opt2;
	l = 0;
	k = 0;
	k = 0;
	buld = 0;
	ic = 0;
	s = 0;
	set = 0;
	gt = 0;
	f = 0;
	ew = 0;
	t = 0;
	time = 0;
	//36(cyan)= Protagonist(Thomas), normal(white)= sound effects, 35(magenta)= Jessica, 31(red) antagoist

		//Menu Image
	cout << "                               .     ." << 
		"\n                               !!!!!!!" << 
		"\n                       .       [[[|]]]    ." << 
		"\n                       !!!!!!!!|--_--|!!!!!" << 
		"\n                       [[[[[[[[\\_(X)_/]]]]]" << 
		"\n               .-.     /-_--__-/_--_-\\-_--\\" << 
		"\n               |=|    /-_---__/__-__-_\\__-_\\" << 
		"\n           . . |=| ._/-__-__\\===========/-__\\_" << 
		"\n           !!!!!!!!!\\========[ /]]|[[\\ ]=====/" << 
		"\n          /-_--_-_-_[[[[[[[[[||==  == ||]]]]]]" << 
		"\n         /-_--_--_--_|=  === ||=/^|^\\ ||== =|" << 
		"\n        /-_-/^|^\\-_--| /^|^\\=|| | | | ||^\\= |" << 
		"\n       /_-_-| | |-_--|=| | | ||=|_|_|=||\"|==|" << 
		"\n      /-__--|_|_|_-_-| |_|_|=||______=||_| =|" << 
		"\n     /_-__--_-__-___-|_=__=_.`---------'._=_|__" << 
		"\n    /-----------------------\\===========/-----/" << 
		"\n   ^^^\\^^^^^^^^^^^^^^^^^^^^^^[[|]]|[[|]]=====/" << 
		"\n       |.' ..==::'\"'::==.. '.[ /~~~~~\\ ]]]]]]]" << 
		"\n       | .'=[[[|]]|[[|]]]=`._||==  =  || =\\ ]" << 
		"\n       ||== =|/ _____ \\|== = ||=/^|^\\=||^\\ ||" << 
		"\n       || == `||-----||' = ==|| | | |=|| |=||" << 
		"\n       ||= == ||:^s^:|| = == ||=| | | || |=||" << 
		"\n       || = = ||:___:||= == =|| |_|_| ||_|=||" << 
		"\n      _||_ = =||o---.|| = ==_||_= == =||==_||_" << 
		"\n      \\__/= = ||:   :||= == \\__/[][][][][]\\__/" << 
		"\n      [||]= ==||:___:|| = = [||]\\\\//\\\\//\\\\[||]" << 
		"\n      }  {---'\"'-----'\"'- --}  {//\\\\//\\\\//}  {" << 
		"\n    __[==]__________________[==]\\\\//\\\\//\\\\[==]_" << 
		"\n   |`|~~~~|================|~~~~|~~~~~~~~|~~~~||" << 
		"\n   |^| ^  |================|^   | ^ ^^ ^ |  ^ ||" << 
		"\n  \\|//\\\\/^|/==============\\|/^\\\\\\^/^.\\^///\\\\//|///" << 
		"\n \\\\///\\\\\\//===============\\\\//\\\\///\\\\\\\\////\\\\\\/////" << 
		"\n \"\"'\"\"'\"\"\".'..'. ' '. ''..'.\"\"'\"\"'\"\"'\"\"''\"''\"''\"\"" << 
		"\n\n             Press 'ENTER' to Start" << endl;

	system("pause");



	//Opening
	cout << " August 18, 1984 22:51 PM \n" << endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	cout << "You are driving alone along a long over grown dirt road to your new home.\n" << endl;
	printf("\x1b[36m <\?\?\?>\x1b[0m  10 years. Its been 10 years since I last visited the house. After my mother had died, no one wanted to go back. The place is just plain creepy, but I have no where left to go but there. A few bad investments left me broke and homeless. Though I wonder how much longer I will have to drive, as I don't recall the drive being this lon-\n\n");
	std::this_thread::sleep_for(std::chrono::seconds(5));
	cout << "*RING RING RING RING RI-*" << endl;
	system("\n pause");
	printf("o\x1b[36m <\?\?\?> \x1b[0m Uh.. Hello? \n\n");
	system("\n pause");
	printf("\x1b[35m <\?\?\?> \x1b[0m THOMAS!? THOMAS IS THIS YOU!? ITS ME JES- \n\n");
	system("\n pause");
	printf("\x1b[36m <Thomas> \x1b[0m YES! Yes, it's me, Thomas. There is no need to yell off my ear Jessica. How would I not know it is you with all of your screaming? \n\n");
	system("\n pause");
	printf("\x1b[35m <Jessica> \x1b[0m Oh sorry I didn't mean to... Its just that it took me hours to obtain your number. Do you realize how many numbers I called before I came across yours? \n\n");
	system("\n pause");
	printf("\x1b[35m <Jessica> \x1b[0m You know what it doesn't matter. Just know if a stranger turns up at my door, WITH A BOX OF CHOCOLATES ANYTIME SOON IT IS YOUR FAULT! \n\n");
	system("\n pause");
	printf("\x1b[36m <Thomas> \x1b[0m Jessica, you're yelling again. Why did you call? To blame me for your self-inflicted problems? Or just to say hi? \n\n");
	system("\n pause");
	printf("\x1b[35m <Jessica> \x1b[0m No, no, I wouldn't have called you unless it was important. I'm just wondering if it's actually a good idea for you to stay at that house by yourself, with it being so big and abandoned for so many years and...you know... How about you just stay with me till everything blows over. \n\n");
	system("\n pause");
	printf("\x1b[36m <Thomas> \x1b[0m  *sigh* I don't think that is a great idea. You are married and have children to take care of you don't need to worry about your step brother so much. I am perfectly capable of taking care of myself. Plus I already made arrangements with the water and electrical companies to get things started.\n\n");
	system("\n pause");
	printf("\x1b[35m <Jessica> \x1b[0m  ..... If this is what you really want, I won't stop you. Just know I am here for you. You don't need to do everything on your own. I'm not like the rest of my siblings; I don't blame you.\n\n");
	system("\n pause");
	printf("\x1b[36m <Thomas> \x1b[0m ...... \n\n");
	system("\n pause");
	printf("\x1b[35m <Jessica> \x1b[0m YIKES! I can practically feel you glaring at me. Well, if you need anything, call. Okay? I'll come by tomorrow and help with moving in. So...uhhuh BYE! \n\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
	cout << "*CLICK*\n" << endl;
	system("\n pause");

	printf("\x1b[36m <Thomas> \x1b[0m *sigh* .... Well, it looks like I'm here... Just as friendly as I remember it. \n\n");
	system("\n pause");

	cout << "                               .     ." <<
		"\n                               !!!!!!!" <<
		"\n                       .       [[[|]]]    ." <<
		"\n                       !!!!!!!!|--_--|!!!!!" <<
		"\n                       [[[[[[[[\\_(X)_/]]]]]" <<
		"\n               .-.     /-_--__-/_--_-\\-_--\\" <<
		"\n               |=|    /-_---__/__-__-_\\__-_\\" <<
		"\n           . . |=| ._/-__-__\\===========/-__\\_" <<
		"\n           !!!!!!!!!\\========[ /]]|[[\\ ]=====/" <<
		"\n          /-_--_-_-_[[[[[[[[[||==  == ||]]]]]]" <<
		"\n         /-_--_--_--_|=  === ||=/^|^\\ ||== =|" <<
		"\n        /-_-/^|^\\-_--| /^|^\\=|| | | | ||^\\= |" <<
		"\n       /_-_-| | |-_--|=| | | ||=|_|_|=||\"|==|" <<
		"\n      /-__--|_|_|_-_-| |_|_|=||______=||_| =|" <<
		"\n     /_-__--_-__-___-|_=__=_.`---------'._=_|__" <<
		"\n    /-----------------------\\===========/-----/" <<
		"\n   ^^^\\^^^^^^^^^^^^^^^^^^^^^^[[|]]|[[|]]=====/" <<
		"\n       |.' ..==::'\"'::==.. '.[ /~~~~~\\ ]]]]]]]" <<
		"\n       | .'=[[[|]]|[[|]]]=`._||==  =  || =\\ ]" <<
		"\n       ||== =|/ _____ \\|== = ||=/^|^\\=||^\\ ||" <<
		"\n       || == `||-----||' = ==|| | | |=|| |=||" <<
		"\n       ||= == ||:^s^:|| = == ||=| | | || |=||" <<
		"\n       || = = ||:___:||= == =|| |_|_| ||_|=||" <<
		"\n      _||_ = =||o---.|| = ==_||_= == =||==_||_" <<
		"\n      \\__/= = ||:   :||= == \\__/[][][][][]\\__/" <<
		"\n      [||]= ==||:___:|| = = [||]\\\\//\\\\//\\\\[||]" <<
		"\n      }  {---'\"'-----'\"'- --}  {//\\\\//\\\\//}  {" <<
		"\n    __[==]__________________[==]\\\\//\\\\//\\\\[==]_" <<
		"\n   |`|~~~~|================|~~~~|~~~~~~~~|~~~~||" <<
		"\n   |^| ^  |================|^   | ^ ^^ ^ |  ^ ||" <<
		"\n  \\|//\\\\/^|/==============\\|/^\\\\\\^/^.\\^///\\\\//|///" <<
		"\n \\\\///\\\\\\//===============\\\\//\\\\///\\\\\\\\////\\\\\\/////" <<
		"\n \"\"'\"\"'\"\"\".'..'. ' '. ''..'.\"\"'\"\"'\"\"'\"\"''\"''\"''\"\"" <<
		"\n\n             Press 'ENTER' to Start" << endl;

	//Arrival


	std::this_thread::sleep_for(std::chrono::seconds(5));
	cout << "You park the car and turn the engine off. The place looks abandon and mistreated. Outside the wind is howling, inviting a storm. \n" << endl;
	system("\n pause");
	printf("\x1b[36m <Thomas> \x1b[0m Well, I better get out of the car and get the key from above the front door before this storm rolls in. \n\n");
	std::this_thread::sleep_for(std::chrono::seconds(5));
	cout << "Instructions: Options will appear on screen, type in the option you want to execute." << endl;
	set = 1;
	system("\n pause");
	play = 1;

	//Choice Start
	while (play == 1) {
		//Choice 1
		while (set == 1) {
			cout << " A.) Get out of car. \n B.) Look in the glove box. \n C.) Drive away." << endl;
			cin >> opt1;
			//After Key Event
			if (l == 1) {
				if (opt1 == 'c' || opt1 == 'C') {
					printf("\x1b[36m <Thomas> \x1b[0m Good choice. \n\n");
					std::this_thread::sleep_for(std::chrono::seconds(5));
					cout << "You drove away. \n" << endl;
					set = 7;
				}
				else if (opt1 == 'b' || opt1 == 'B' || opt1 == 'c' || opt1 == 'C') {
					printf("\x1b[36m <Thomas> \x1b[0m Let's try option C.\n");
					std::this_thread::sleep_for(std::chrono::seconds(5));
					cout << "Even though you picked option " << opt1 << " Thomas will do option C." << endl;
					system("\n pause");
					cout << "Thomas drove away.\n" << endl;
					set = 7;
				}
				else {
					cout << "Command not found." << endl;
					continue;
				}
				if (!cin) {
					cout << "Command not reconized." << endl;
					cin.clear();
					cin.ignore(10000, '\n');
				}
			}
			//Before Key Event
			else {
				if (opt1 == 'A' || opt1 == 'a') {
					set = 2;
				}
				else if (opt1 == 'B' || opt1 == 'b') {
					if (gt > 0) {
						cout << "You decided to not open the glove box as you have already looked in it." << endl;
						system("\n pause");
					}
					else {
						cout << "You open the glove box. The glove box is filled with nothing of note only a small flashlight and a stack of papers. One paper, in particular, catches your eye. It is a small paper with purple pen lettering saying \"Happy Birthday Thomas! You made it to the big 10! I am so proud of you. I couldn't be more happy to be your mother! Your new father and I wanted to give you this gift. Love.\" There is no gift attached and the names are unreadable as they are scribbled out with black pen." << endl;
						gt++;
						system("\n pause");
					}
					continue;
				}
				else if (opt1 == 'C' || opt1 == 'c') {

					cout << "*Vroom vroom vroooooommm*\n" << endl;
					system("\n pause");
					cout << " August 19, 1984 10:21 AM" << endl;
					std::this_thread::sleep_for(std::chrono::seconds(5));
					cout << " *RING RING RING RING RING* \n " << endl;
					std::this_thread::sleep_for(std::chrono::seconds(5));
					cout << "The person you are trying to call is unavailable at this time. At the tone please leave your voice message, hang up or press one for more options. *BEEP*\n" << endl;
					std::this_thread::sleep_for(std::chrono::seconds(5));
					printf("\x1b[35m <Jessica> \x1b[0m Hey, this is Jessica. I noticed you weren't home and got worried. By the way you left the door open and tracked in a bunch of mud. So I cleaned it up and locked up behind me before I left. Just be a little more careful next time there are bad people in this world. \n\n");
					system("\n pause");

					cout << "Ending One \n Chicken" << endl;
					return 0;
				}
				else {
					cout << "Command not found." << endl;
					continue;
				}
				if (!cin) {
					cout << "Command not reconized." << endl;
					cin.clear();
					cin.ignore(10000, '\n');
				}
			}
		}


		//Choice 2
		while (set == 2) {
			cout << "You stand next to the car to only be met by a cold breeze and the dim light of the porch." << endl;
			system("\n pause");

			cout << " A.) Get back in the car. \n B.) Go in the forest. \n C.) Walk to front porch." << endl;
			cin >> opt1;
			//After Key Event
			if (l == 1) {
				printf("\x1b[36m <Thomas> \x1b[0m I can get this one. \n");
				std::this_thread::sleep_for(std::chrono::seconds(5));
				cout << "You enter the car." << endl;
				system("\n pause");
				set = 1;
			}
			//Before Key Event
			else {
				if (opt1 == 'A' || opt1 == 'a') {
					cout << "You get back in the car. The car seems warmer and safer then before. You wonder was it the weather giving this new feeling or something more." << endl;
					ic = ic + 1;
					system("\n pause");
					if (ic > 5) {
						cout << "For the rest of the night you went in and out of your car. Only to be hit over the head by something." << endl;
						system("\n pause");
						cout << "*THUD* \n" << endl;
						std::this_thread::sleep_for(std::chrono::seconds(5));
						cout << "Immidiately killing you" << endl;
						system("\n pause");
						cout << "Ending Three \n Obsession" << endl;
						return 0;
					}
					else {
						set = 1;
					}

				}
				else if (opt1 == 'B' || opt1 == 'b') {
					if (f == 1) {
						printf("\x1b[36m <Thomas> \x1b[0m Why do I want to go back in there? I already got hurt once. \n\n");
						std::this_thread::sleep_for(std::chrono::seconds(5));
						cout << "You decide to not go into the forest." << endl;
						system("\n pause");
					}
					else {
						cout << "You walk into the forest. It is pitch back you cannot see where you are going.\n " << endl;
						//Choice for in forest
						cout << " A.) Continue further in the forest. \n B.) Go back to the car." << endl;
						cin >> opt2;
						if (opt2 == 'A' || opt2 == 'a') {
							cout << "You stumble farther into the forest. A root catches your foot. Sending you tumbling down the hill.\n" << endl;
							std::this_thread::sleep_for(std::chrono::seconds(5));
							printf("\x1b[36m <Thomas> \x1b[0m AHHHHHHH! \n");
							system("\n pause");
							cout << "Faster and faster you tumble till - *CRACK THUD* \n" << endl;
							std::this_thread::sleep_for(std::chrono::seconds(5));
							cout << "Ending Two \n Tree Fall" << endl;
							return 0;
						}
						else if (opt2 == 'B' || opt2 == 'b') {
							cout << "You leave the forest with a few scratches from the trees and with leaves and little branches all over your cloths. You can feel a few branches poking you as you walk.\n" << endl;
							std::this_thread::sleep_for(std::chrono::seconds(5));
							printf("\x1b[36m <Thomas> \x1b[0m That was a stupid idea. Why did I even go into the forest in the first place? \n");
							system("\n pause");
							cout << "As you walk back to the car you begin to pick of the leaves and branches off of your cloths." << endl;
							system("\n pause");
							f = 1;
							continue;
						}
						else {
							cout << "Command not found." << endl;
							continue;
						}
						if (!cin) {
							cout << "Command not reconized." << endl;
							cin.clear();
							cin.ignore(10000, '\n');
						}
					}
					continue;
				}
				else if (opt1 == 'C' || opt1 == 'c') {
					set = 3;
				}
				else {
					cout << "Command not found." << endl;
					continue;
				}
				if (!cin) {
					cout << "Command not reconized." << endl;
					cin.clear();
					cin.ignore(10000, '\n');
				}
			}
		}



		//Choice 3
		while (set == 3) {
			cout << "You stand on the front porch. There is a faint buzzing noise coming from the porch light. Above the door is a little ledge." << endl;
			//Bulb not fixed
			if (buld == 0) {
				cout << "As you stand there the light occasionally flickers." << endl;
			}
			//Key not found
			system("\n pause");
			if (k == 0) {
				printf("\x1b[36m <Thomas> \x1b[0m The key should be up there on the ledge, I just hope that an animal didn't get to it first. \n");
				system("\n pause");
			}
			//After Key Event
			if (l == 1) {
				cout << " A.) Fiddle with the lightbuld. \n B.) Enter the house. \n C.) Go back to the car." << endl;
				cin >> opt1;
				if (opt1 == 'a' || opt1 == 'A') {
					if (buld == 0) {
						printf("\x1b[36m <Thomas> \x1b[0m Why fix that now when you need to get me out of here. \n");
						system("\n pause");
					}
					else {
						printf("\x1b[36m <Thomas> \x1b[0m It's already fixed. Now lets go. \n");
						system("\n pause");
					}
				}
				else if (opt1 == 'B' || opt1 == 'b') {
					printf("\x1b[36m <Thomas> \x1b[0m Why would I want to go back if I'm trying to leave? \n");
					system("\n pause");
				}
				else if (opt1 == 'c' || opt1 == 'C') {
					set = 2;
				}
				else {
					cout << "Command not found." << endl;
					continue;
				}
				if (!cin) {
					cout << "Command not reconized." << endl;
					cin.clear();
					cin.ignore(10000, '\n');
				}
			}
			//Before Key Event
			else {
				cout << " A.) Reach and feel on the ledge for the key \n B.) Fiddle with the lightbulb. \n C.) Enter the house. \n D.) Go back to the car." << endl;
				cin >> opt1;
				if (opt1 == 'A' || opt1 == 'a') {
					if (k > 0) {
						cout << "You already have to key." << endl;
						system("\n pause");
					}
					else {
						//Spider
						if (r <= 3) {
							cout << "You reach up feeling around on the ledge.\n" << endl;
							std::this_thread::sleep_for(std::chrono::seconds(5));
							cout << "You feel a key shaped object and grab it but at the same time a spider crawls across you hand and down your arm." << endl;
							system("\n pause");
							cout << "Do to reflexes you drop the key and frantically try to brush off the spider. As you pick the key up you realize that you don't know where the spider went." << endl;
							system("\n pause");
							k = 1;
						}
						//spiderweb
						if (r >= 7) {
							cout << "You reach up feeling around on the ledge.\n" << endl;
							std::this_thread::sleep_for(std::chrono::seconds(5));
							cout << "As you feel around a web like material covers your hand and by the time you find the key and the sheer amount of cobwebs; your hand is not visible.\n" << endl;
							std::this_thread::sleep_for(std::chrono::seconds(5));
							printf("\x1b[36m <Thomas> \x1b[0m Ew. That is just gross.\n");
							system("\n pause");
							cout << "You wipe the cobwebs off on your pant leg." << endl;
							system("\n pause");
							k = 1;

						}
						//nothing
						if (r > 3 && r < 7) {
							cout << "You reach up feeling around on the ledge." << endl;
							std::this_thread::sleep_for(std::chrono::seconds(5));
							cout << "You found the key." << endl;
							system("\n pause");
							k = 1;
						}
					}
					continue;

				}
				else if (opt1 == 'B' || opt1 == 'b') {
					if (buld <= 4 && buld >= 1) {
						cout << "You look up at the light, waiting for it to flicker. However, it doesn't flicker as it was already fixed. So you decide that you do not need to do anything with the lightbulb." << endl;
						buld = buld + 1;
						system("\n pause");

					}
					else if (buld == 5) {
						cout << "You stare at the light no blinking as you do not want to miss it flickering. You stare so long that everything became black." << endl;
						std::this_thread::sleep_for(std::chrono::seconds(5));
						printf("\x1b[36m <Thomas> \x1b[0m Did the power go out? \n");
						system("\n pause");
						cout << "You realize that you stared at the light so long that you went blind. You try to make it back to the car where it's safe only to forever be lost." << endl;
						std::this_thread::sleep_for(std::chrono::seconds(5));
						cout << "Ending Four \n Another World" << endl;
						return 0;
					}
					else {
						cout << "You reach grabbing the lightbulb. You remove the lightbulb only to put it back in, once the lightbulb was secured it emitted a solid bright light." << endl;
						system("\n pause");
						buld = 1;
					}
					continue;
				}
				else if (opt1 == 'C' || opt1 == 'c') {
					if (k == 2) {
						cout << "You entered the house." << endl;
						system("\n pause");
						set = 4;
					}
					else if (k == 1) {
						cout << "You used the key to unlock the door and enter the house. Shutting the door behind you.\n" << endl;
						std::this_thread::sleep_for(std::chrono::seconds(5));
						printf("\x1b[36m <Thomas> \x1b[0m Finally inside. I need to find a place to sleep as I have a long day tomorrow. \n");
						system("\n pause");
						k = 2;
						set = 4;
					}
					else {
						cout << "You turn to door nob to only find that it is locked." << endl;
						system("\n pause");
					}
					continue;
				}
				else if (opt1 == 'D' || opt1 == 'd') {
					set = 2;
				}
				else {
					cout << "Command not found." << endl;
					continue;
				}
				if (!cin) {
					cout << "Command not reconized." << endl;
					cin.clear();
					cin.ignore(10000, '\n');
				}
			}
		}

		//Choice 4
		while (set == 4) {
			cout << "You enter the entry way and the lights turn on due to a motion activation. The entry way is filled with portraits and photographs and leads to two different areas of the house. There is a stair case that leads to the second floor and just past the stair case is the living room." << endl;
			system("\n pause");
			//First time in Entry Way (ew)
			if (ew != 1) {
				printf("\x1b[36m <Thomas> \x1b[0m Ah. This brings back memories, that I could have lived without for the rest of my life.\n");
				system("\n pause");
				cout << "You walk up to a picture frame on the clean table that holds a picture of a woman in a bright blue dress holding hands with a man who is wearing a tux. They both look well dressed and happy. " << endl;
				system("\n pause");
				cout << "You pick up the picture frame off of the table. Inspect it like it has a disease and put it face down on the table. " << endl;
				system("\n pause");
				ew = 1;
			}
			cout << " A.) Go to living room. \n B.) Go upstairs. \n C.) Leave the house." << endl;
			cin >> opt1;
			//After Key Event
			if (l == 1) {
				if (opt1 == 'a' || opt1 == 'A') {
					printf("\x1b[36m <Thomas> \x1b[0m I don't want to go back in there. I just want to leave.\n");
					system("\n pause");
				}
				else if (opt1 == 'b' || opt1 == 'B') {
					printf("\x1b[36m <Thomas> \x1b[0m How will going upstairs bring me to my car? \n");
					system("\n pause");
				}
				else if (opt1 == 'c' || opt1 == 'C') {
					set = 3;
				}
				else {
					cout << "Command not found." << endl;
					continue;
				}
				if (!cin) {
					cout << "Command not reconized." << endl;
					cin.clear();
					cin.ignore(10000, '\n');
				}
			}
			//Before Key Event
			else {
				if (opt1 == 'a' || opt1 == 'A') {
					set = 5;
				}
				else if (opt1 == 'B' || opt1 == 'b') {
					if (s < 1) {
						cout << "As you walk up the stairs the smell of mildew became noticeable. The more you go up the stronger. There is a cold breeze climbing down the stairs.\n" << endl;
						std::this_thread::sleep_for(std::chrono::seconds(5));
						printf("\x1b[36m <Thomas> \x1b[0m Ugh, that smell. Did a window bust or is there a hole in the roof? Either way I am not going up there till that is sorted out. I don't want to get sick. \n");
						system("\n pause");
						cout << "You walk back down the stairs." << endl;
						system("\n pause");
						s = 1;
						continue;
					}
					if (s == 1 || s < 3) {
						cout << "You stand at the bottom of the stairs about to walk up. Then you remember the reason you didn't go up the first time.\n" << endl;
						s = s + 1;
						continue;
					}
					if (s == 3) {
						cout << "You walk up the stairs no longer caring about the danger that the mold could pose." << endl;
						system("\n pause");
						cout << "You get to the top of the stairs. You can hardly breath. You vision starts to blacken, till *THUD*" << endl;
						std::this_thread::sleep_for(std::chrono::seconds(5));
						cout << "Ending Five \n Caution to the Wind" << endl;
						return 0;
					}
				}
				else if (opt1 == 'C' || opt1 == 'c') {
					set = 3;
				}
				else {
					cout << "Command not found." << endl;
					continue;
				}
				if (!cin) {
					cout << "Command not reconized." << endl;
					cin.clear();
					cin.ignore(10000, '\n');
				}
			}



		}
		//Choice 5
		while (set == 5) {
			cout << "You stand in the living room there is a couch and a tap and cassette player on the table. The kitchen is visible from the living room.\n" << endl;
			std::this_thread::sleep_for(std::chrono::seconds(5));
			if (l != 1) {
				printf("\x1b[36m <Thomas> \x1b[0m Jessica must of been here and pulled it out. I wonder what is on the tape. \n");
			}
			system("\n pause");
			cout << " A.) Sleep on couch \n B.) Listen to tape \n C.) Go to entry way \n D.) Enter kitchen" << endl;
			cin >> opt1;
			if (opt1 == 'a' || opt1 == 'A') {
				if (l == 1) {
					printf("\x1b[36m <Thomas> \x1b[0m I don't feel like sleeping here. I'll sleep at the hotel. \n");
					system("\n pause");
				}
				else {
					printf("\x1b[36m <Thomas> \x1b[0m Looks like this is where I'm sleeping.  \n");
					system("\n pause");
					cout << "You lay down on the couch, close your eyes and fall asleep.\n " << endl;
					std::this_thread::sleep_for(std::chrono::seconds(5));
					cout << "*BANG*" << endl;
					std::this_thread::sleep_for(std::chrono::seconds(5));
					cout << "*STEP, STEP, STEP*" << endl;
					system("\n pause");
					time = 0;
					for (time = 0; time <= 3; time++) {
						cout << "..." << endl;
						std::this_thread::sleep_for(std::chrono::seconds(5));
					}
					cout << "*THUD*" << endl;
					system("\n pause");
					cout << "A hand is placed over your mouth forcefully. You panic not being able to see and barely breath. You try to struggle, but who ever is holding you down is too strong." << endl;
					system("\n pause");
					printf("\x1b[31m <\?\?\?> \x1b[0m Well, well, well you really did show up. Did you like my gift? Did you listen to it? Knowing you, you probably didn't as you've only cared about yourself and if you did you wouldn't be here. Guess things never change. After all you pushed my father off the roof. I will never forgive you and today you will pay the price with your own life. \n\n");
					system("\n pause");
					cout << "You feel a sharp cold object on your throat, with every second more pressure is applied. Till it pierces your skin and you feel like your drowning." << endl;
					system("\n pause");
					cout << "Ending Six \n Face to Face" << endl;
					return 0;
				}
			}
			//Key Event
			else if (opt1 == 'b' || opt1 == 'B') {
				cout << "You walk over to the tape and place it the cassette player. You press play.\n" << endl;
				system("\n pause");
				time = 1;
				for (int time = 1; time <= 3; time++) {
					cout << time << endl;
					std::this_thread::sleep_for(std::chrono::seconds(5));
				}
				cout << "Happy Birthday Thomas! We know you are at your fathers for this special occasion, so your mother thought we should record this for you as you have now reached double digits. I may have not known you long, but you are a good boy and your other loves you dearly. After listening to this meet me on the roof and to chat man to man. What do you say sport? \n" << endl;
				std::this_thread::sleep_for(std::chrono::seconds(5));
				printf("\x1b[36m <Thomas> \x1b[0m If this is a joke, it's sick. \n");
				system("\n pause");
				printf("\x1b[36m <Thomas> \x1b[0m Thinking back it's odd that the entry way was clean. Jessica would never do something like this. Not only that why this tape? Don't tell me one of the other ones came. How do they even know I never told them? \n \n");
				std::this_thread::sleep_for(std::chrono::seconds(5));
				printf("\x1b[36m <Thomas> \x1b[0m Just to be safe for tonight, I think I'm going to get a hotel till I can replace the locks. \n");
				l = 1;
				system("\n pause");
			}
			else if (opt1 == 'c' || opt1 == 'C') {
				set = 4;
			}
			else if (opt1 == 'd' || opt1 == 'D') {
				if (l == 1) {
					printf("\x1b[36m <Thomas> \x1b[0m I just want to leave the house. Going to the kitchen is no longer appealing. \n");
					system("\n pause");
				}
				else {
					set = 6;
				}
			}
			else {
				cout << "Command not found." << endl;
				continue;
			}
			if (!cin) {
				cout << "Command not reconized." << endl;
				cin.clear();
				cin.ignore(10000, '\n');
			}

		}
		//Choice 6
		while (set == 6) {
			cout << "You stand in the kitchen it's baren but spotless not a spec of dust. There is, however, a fridge with a note on it." << endl;
			system("\n pause");
			cout << " A.) Look at the note \n B.) Look inside fridge \n C.) Leave the kitchen" << endl;
			cin >> opt1;
			if (opt1 == 'a' || opt1 == 'A') {
				cout << "You walk up to the fridge and examine the note it say \"May, 5 1974. \n Patient: Mary Louise \n Today at 9:47 am Mary Louise was declared deceased due to heart failure from stage three heart cancer.\" \n" << endl;
				system("\n pause");
				printf("\x1b[36m <Thomas> \x1b[0m My mothers death certificate from the hospital what is it doing here? \n");
				system("\n pause");
			}
			else if (opt1 == 'b' || opt1 == 'B') {
				cout << "You walk up to the fridge and dramatically open it, to only find that it is empty." << endl;
				system("\n pause");
			}
			else if (opt1 == 'c' || opt1 == 'C') {
				set = 5;
			}
			else {
				cout << "Command not found." << endl;
				continue;
			}
			if (!cin) {
				cout << "Command not reconized." << endl;
				cin.clear();
				cin.ignore(10000, '\n');
			}
		}
		//True End
		if (set == 7) {
			cout << "Ending Seven \n One-Way Ticket" << endl;
			return 0;
		}

	}
	return 0;
}