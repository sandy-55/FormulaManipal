//program13

#include <stdio.h>
#include <stdbool.h>

int main() 
{
	FILE *file;
	char filename[100], ch;
	int charCount = 0, wordCount = 0, lineCount = 0;
	bool inWord = false;

	printf("Enter the file name: ");
	scanf("%s", filename);

	file = fopen(filename, "r");

	if (file == NULL) 
	{
		printf("Could not open file.\n");
		return 1;
	}

	while ((ch = fgetc(file)) != EOF) 
	{
		charCount++;

		// Count lines
		if (ch == '\n')
			lineCount++;

		// Count words
		if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') 
		{
			if (inWord) 
			{
				wordCount++;
				inWord = false;
			}
		} 
		else 
		{
			inWord = true;
		}
	}

	// Count the last word if the file does not end with a space or newline
	if (inWord)
		wordCount++;

	// If the file is not empty, increment line count for the last line (if no trailing newline)
	if (charCount > 0 && ch != '\n')
		lineCount++;

	printf("Characters: %d\n", charCount);
	printf("Words: %d\n", wordCount);
	printf("Lines: %d\n", lineCount);

	fclose(file);

	return 0;
}
