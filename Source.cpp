/*
	Name: PasswordCrackerProject.sln
	Desc: A simple lowercase Brute Force attempt
	Auth: Morgan Scott
	Date: 10/05/2022
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// Set variables
	int counter = 0;
	string password;
	string letter[10];
	string guess;

	// Create array for guess letters
	string alphabet[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };

	// Get password from user
	cout << "ENTER PASSWORD " << endl;
	cin >> password;

	// Take current time as start time
	int startTime = time(0);

	if (guess != password)
	{
		for (int b = 0; b < 26; b++)
		{
			letter[9] = alphabet[b];

			for (int c = 0; c < 26; c++)
			{
					letter[8] = alphabet[c];

					for (int d = 0; d < 26; d++)
					{
						letter[7] = alphabet[d];

						for (int e = 0; e < 26; e++)
						{
							letter[6] = alphabet[e];

							for (int f = 0; f < 26; f++)
							{
								letter[5] = alphabet[f];

								for (int g = 0; g < 26; g++)
								{
									letter[4] = alphabet[g];

									for (int h = 0; h < 26; h++)
									{
										letter[3] = alphabet[h];

										for (int i = 0; i < 26; i++)
										{
											letter[2] = alphabet[i];

											for (int j = 0; j < 26; j++)
											{
												letter[1] = alphabet[j];

												for (int k = 0; k < 26; k++)
												{
													letter[0] = alphabet[k];

													for (int z = counter; z >= 0; z--)
													{
														guess += letter[z];
													}
													// cout << guess << endl;
													if (guess == password)
													{
														break;
													}
													guess = "";
												}
												if (guess == password)
												{
													break;
												}
												if (counter == 0)
												{
													counter = 1;
												}
											}
											if (guess == password)
											{
												break;
											}
											if (counter == 1)
											{
												counter = 2;
											}
										}
										if (guess == password)
										{
											break;
										}
										if (counter == 2)
										{
											counter = 3;
										}
									}
									if (guess == password)
									{
										break;
									}
									if (counter == 3)
									{
										counter = 4;
									}
								}
								if (guess == password)
								{
									break;
								}
								if (counter == 4)
								{
									counter = 5;
								}
							}
							if (guess == password)
							{
								break;
							}
							if (counter == 5)
							{
								counter = 6;
							}
						}
						if (guess == password)
						{
							break;
						}
						if (counter == 6)
						{
							counter = 7;
						}
					}
					if (guess == password)
					{
						break;
					}
					if (counter == 7)
					{
						counter = 8;
					}
				}
				if (guess == password)
				{
					break;
				}
				if (counter == 8)
				{
					counter = 9;
				}
		}
	}

	// Get end time
	int newTime = time(0);

	// Output password
	cout << "The password is " << guess << endl;

	// Calculate and display time taken
	int totalTime = (newTime - startTime);
	if (totalTime == 0)
	{
		cout << "It took <1s to find" << endl;
	}
	else
	{
		cout << "It took " << totalTime << "s to find" << endl;
	}

}