#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char  song[25]; // Name of song	
	char  artist[15]; // artist name
	//pointer to next node in the list
	struct node *next;
}info;

//function Prototypes
info *addSong(info *head, char title[], char author[]);
void print_list(info *head);
void search_database(info *head, char title[]);
void delete_item(info *head , char title[]);

int main(){
    //initialize linked list
    info song1 = {"thriller","jackson", NULL };
    info song2 = {"thriller2","jackson2", NULL };
    info song3 = {"thriller3","jackson3", NULL };
    song1.next = &song2;
    song2.next = &song3;

	//initialize head pointer and new pointer
	info *head = NULL;
    info *newest = NULL;
    //open file
    FILE *filep = fopen("music.txt", "r");
    char songRead[25];
    char artistRead[15];
    int line;
    //read file
    while( fgets( songRead, sizeof(line), filep)){
    line++;
    printf("line %d : %s\n",line,songRead);

        
    }
    //close file
    fclose(filep);

     //user interface switch statment
	printf("welcome!\n1) Print the contents of the list\n2) Add a song to the list \n3) Search for a song \n4) Delete a node from the list \n5) Quit without saving\n6) Quit and Save\n");
	int in;
	scanf("%d", &in);
	switch(in){
		case 1 :
			printf("the contents of the list are as follows\n");
		    print_list(&song1);
            main();
			break;
		case 2 :
			printf("add song to list\n");
            
            
            
			break;
		case 3 :
			printf("enter the name of the song you would like to search for\n");
			
			break;
		case 4 :
			printf("enter the name of the song you would like to delete\n");
			
			break;
		case 5 :
			printf("exiting without saving\n");
			exit (0);
			break;
		case 6 :
			printf("saving changes and exiting\n");
	
			break;
	return 0;
}

}
info *addSong(info *head, char title[], char author[]){
	printf("enter the name & artist of the song\n");
    char inputSong[25];
    char inputArtist[15];

    info *newSong = malloc(sizeof(inputSong));
    info *newArtist = malloc(sizeof(inputArtist));
	scanf("%s", newSong->song);
    scanf("%s", newArtist->artist);
    printf("song: %s artist: %s\n", newSong->song, newArtist->artist);
    

}


void print_list(info *head){
    info *currentSong = head;
    int count = 0;

    while(currentSong != NULL){
        printf("%d song: %s artist: %s\n",count,currentSong->song,currentSong->artist);
        count++;
        currentSong = currentSong->next;
    }


}
void search_database(info *head, char title[]){


}
void delete_item(info *head , char title[]){


}
