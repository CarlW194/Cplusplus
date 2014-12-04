//Complex.h

class Complex{
	
	public:
		double getReal();
		void setReal(double num);
		double getImag();
		void setImag(double num);
		void print();
		
		const Complex operator+(const Complex &z) const;
		const Complex operator-(const Complex &z) const;
		const Complex operator*(const Complex &z) const;

	protected:
		double real_;
		double imag_;
};
