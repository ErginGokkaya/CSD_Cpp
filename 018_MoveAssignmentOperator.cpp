/*
	class T {
	public:
		T &operator =(const T &);
		T &operator =(T &&) noexcept;
		//...
	};
	//...

	T a;
	T b;

	a = b;			// kopya atama operatör fonksiyonu çağrılacak
	a = T();		// taşıma atama operatör fonksiyonu çağrılacak
*/