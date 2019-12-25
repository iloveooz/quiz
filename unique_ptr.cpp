#include <iostream>
#include <memory>
#include <vector>

class C {
public:
	void foo() { std::cout << 'A' << std::endl; }
	void foo() const { std::cout << 'B' << std::endl; }
};

struct S {
	std::vector<C> v;
	std::unique_ptr<C> u;
	C* const p;
	S() : v(1), u(new C()), p(u.get()) {}
};

int main() {
	S s;
	const S& r = s;

	s.v[0].foo();
	s.u->foo();
	s.p->foo();

	r.v[0].foo();
	r.u->foo();
	r.p->foo();

	system("pause");
	return 0;
}
