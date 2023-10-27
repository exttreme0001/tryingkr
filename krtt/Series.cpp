#include<vector>
#include<map>
template <typename T1, typename T2,typename T3>
T1 SeriesNumber(std::map<T2, T3>NewMap) {

	int counter = 0;
	std::vector <T1> series;
	for (int i = 1; i < NewMap.size(); i++) {
		if (i != 1) {
			auto it1 = NewMap.find(i - 1);
			it1->second;
			auto it2 = NewMap.find(i);
			it2->second;
			if (it1->second == it2->second && counter == 0) {

				series.push_back(it2->second); counter++;

			}
			if (it1->second == it2->second) {

				counter++;

			}
			else {

				counter = 0;
			}
		}

	}
	return series.size();
}
