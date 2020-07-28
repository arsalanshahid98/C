#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int deal_a_card();
int rank_to_score(int rank);
int main()
{
	int c1, score;
	srand(time(NULL));
	c1 = deal_a_card();
	score = rank_to_score (c1);
	printf("(score was %d)\n", score);
	return 0;
}
int deal_a_card()
{
	int r;
	int s;
	r= rand();
	int rank =(r%13)+1;
	s= rand();
	int suit =(r%4)+1;
	switch (rank)
{
	case 1:
	printf("Ace");
	break;
	case 11:
	printf("Jack");
	break;
	case 12:
	printf("Queen");
	break;
	case 13:
	printf("King");
	break;
	default:
	printf("%d", rank);
	break;
}
switch (suit)
{
	case 1:
	printf(" Of Hearts");
	break;
	case 2:
	printf(" Of Spades");
	break;
	case 3:
	printf(" Of Clubs");
	break;
	case 4:
	printf(" Of Diamonds");
	break;
}
	return rank;
}
int rank_to_score (int rank)
{
switch (rank)
{
	case 11:
	case 12:
	case 13:
	return 10;
	break;
	default:
	return rank;
}
}
