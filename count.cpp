int level = 0;
string File;
cout << "enter the file name you wanna which in the same folder(suffixed with .cpp)" << endl;
cin >> File;
cout << "what level of stastic you want(from 1 to 4)" << endl;
cin >> level;
ifstream inFile, s1, s2;
inFile.open(File.c_str(), ios::in);
s1.open(File.c_str(), ios::in);
s2.open(File.c_str(), ios::in);
if (!inFile || !s1 || !s2) {
	cout << "There is not such named File !" << endl;
	exit(0);
}

