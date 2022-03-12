/* 
	I just included a couple of different things that may be helpful to me in coding
	this project.

	For now it's mostly just data structures, but as time passes on, I'll add more
	and more to it. 
*/ 
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std; 

int main()
{
  	string user_name; 
	string user_input = "exit";
	string discussion_topic; 
	string favorite_sport; 

	boolean check = false; 
	// These vectors give categories of discussion topics users may have
	// I also used a vector instead of other data structures because of how easy they are to iterate through, as time passes on I'll make these into sets, so that the chatbot will be more efficient 
	
	vector<string> sports {"basketball", "soccer", "football", "baseball", "tennis", "track and field", "golf", "cricket", "hockey"}; 
	vector<string> politics {"legislation", "balance of power", "democrats", "republicans"}; 
	vector<string> movie_genre {"action", "comedy", "horror", "drama", "sci-fi", "thriller", "romance", "documentary", "fantasy", "sports"}; 
	vector<string> music_genre {"r&b", "hip-hop", "christian", "electronic", "country", "jazz", "classic", "rock"}; 
	vector<string> books_genre {"sci-fi", "action", "fantasy", "comedy", "realistic fiction", "thriller", "mystery", "non-fiction"}; 
	
 		
	cout << "Hello, I'm Billy, I will be your chatbot for today" << endl;
	cout << "May I please get your name? "; 
	cin >> user_name;
	cout << endl; 

	cout << "How's your day been so far? " << endl; 
	cin >> user_input; 
	// This while loop would run for as long as the user doesn't input the keyword 
	// exit 
	while(user_input != "exit")
	{
		cout << "What would you like to discuss about? (Type 'exit' to exit )"; 
		cin >> discussion_topic; 
		discussion_topic = tolower(discussion_topic);

		if(discussion_topic == "sports")
		{
			cout << "What is your favorite sport? " << endl; 
			cin >> favorite_sport; 
			
			for(int i = 0; i < sports.size(); i++)
			{
				if(sports[i] == favorite_sport)
				{
					check = true; 
				}
			}

			if(check != true)
			{
				cout << "I don't know much about your sport, could you please tell 	me more?" << endl; 
			}
			
			cout << "That's cool, my favorite sport is soccer, my favorite team is Chelsea F.C., and my favorite player is Cristiano Ronaldo" << endl;
			
			 
		}
		
		
	}
}
