    int position = binarySearch(lastNames, NUM_NAMES, searchStudent);

    if (position != -1)
       cout << lastNames[position] << " was found." << endl;
    else
        cout << searchStudent << " was NOT found." << endl;
		