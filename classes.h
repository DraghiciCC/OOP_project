#ifndef CLASSES_H
#define CLASSES_H

// Date and time object

class DateTime {
private:
	int y;
	int m;
	int d;
	int h;
	int min;

public:
	//Setters and getters
	int getYear();
	int getMonth();
	int getDay();
	int getHour();
	int getMin();

	void setyear(int year);
	void setMonth(int month);
	void setDay(int day);
	void setHour(int hour);
	void setMin(int minute);


	//constructors
	DateTime();
	DateTime(const DateTime& d);
	DateTime(int y, int m, int d, int h, int min);

	// I/O overloads

	

	// Destructor
	~DateTime();


};


#endif