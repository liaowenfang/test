#include <vector>
#include <iostream>

const float FLOAT_E = 0.00001f;

int hangover_step(float len)
{
	if(len > -FLOAT_E && len < FLOAT_E)
		return 0;

	int cards_num = 1;

	float tmp_l = 0.5f ;

	while(tmp_l < len)
	{
		cards_num++;
		tmp_l += 1.0f / (cards_num + 1);				
	}

	return cards_num;
}


void hangover()
{
	float fs[] = {1.0f,3.71f,0.04f,5.19f,0.0f};

	int n = sizeof(fs) / sizeof(float);

	std::vector<float> inputs(fs,fs + n);

	for(unsigned int i = 0 ; i < inputs.size() ; i++)
	{
		int num = hangover_step(inputs[i]);
		if(num)
			std::cout<<num<<std::endl;
	}
}