// large_magnitude_precision.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <vector>

class MFloat
{
public:
	MFloat();
	~MFloat();

	static bool Plus(const MFloat& i0,const MFloat& i1,MFloat& _out);

protected:
	std::vector<int> mData;
};

MFloat::MFloat()
{

}

MFloat::~MFloat()
{

}

bool MFloat::Plus(const MFloat& i0,const MFloat& i1, MFloat& _out )
{


	return false;
}

