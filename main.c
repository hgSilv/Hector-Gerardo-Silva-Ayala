/*
 * main.c
 *
 *  Created on: 06/06/2018
 *      Author: is712655
 */

int main()
{
	Sequence s1, s2, s3;
	s1 = seq_create(10);

	s2 = seq_create_step(1,5);

	s3 = seq_create_step(1,1);

	print("%d", seq_next(s1));


	seq_destroy(s1);
	seq_destroy(s2);
	seq_destroy(s3);


	return 0;
}

