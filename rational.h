#pragma once
//#include<iostream>
class Rational
{
public:
	int numer, denom;
	Rational();
	Rational(int number);
	Rational(int n, int d);
	void simplify(); 
	Rational& operator +=(const Rational& r); 
	Rational operator +(const Rational& r) const;
	Rational operator -() const; 
	Rational& operator -(const Rational& r); 
	Rational& operator ++(); 
	Rational operator ++(int); 
	Rational& operator *=(const Rational& r); 
	Rational& operator /(const Rational& r); 
	bool operator ==(const Rational& r) const; 
	bool operator !=(const Rational& r) const; 
	operator int() const; 
	operator double() const;  
	/*friend istream& operator >>(istream& in, Rational& r);
	friend ostream& operator <<(ostream& out, const Rational& r);*/
};
