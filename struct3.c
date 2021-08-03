#include<stdio.h>
#include<string.h>
struct ab{
    char title[25];
		char artist[20];
		int numSongs;
		float price;
		char dateBought[9];


}cd1;
//={"Red Moon Men","Sam and the Sneeds",12,11.95,"02/02/07"};
int main()
{
    //struct ab cd1;
   strcpy(cd1.title, "Red Moon Men");
	strcpy(cd1.artist,"Sam and the sneeds");
	cd1.numSongs = 12;
	cd1.price = 11.95;
	strcpy(cd1.dateBought, "02/02/07");


    printf("Title : %s\nArtist : %s\nSongs : %d\nPrice : %0.2f\nDate : %s\n",cd1.title,cd1.artist,cd1.numSongs,cd1.price,cd1.dateBought);
}
