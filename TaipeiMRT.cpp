#include "DepthFirstSearch.h"

int main(){
	char to[40], from[40];
	DepthFirstSearch ob;

	// Add station connections to database.
	ob.addInfo("淡水", "紅樹林", 3);
	ob.addInfo("紅樹林", "竹圍", 3);
	ob.addInfo("竹圍", "關渡", 3);
	ob.addInfo("關渡", "忠義", 2);
	ob.addInfo("忠義", "復興崗", 2);
	ob.addInfo("復興崗", "北投", 3);
	ob.addInfo("北投", "新北投", 3);
	ob.addInfo("北投", "奇岩", 2);
	ob.addInfo("奇岩", "唭哩岸", 2);
	ob.addInfo("唭哩岸", "石牌", 2);
	ob.addInfo("石牌", "明德", 2);
	ob.addInfo("明德", "芝山", 2);
	ob.addInfo("芝山", "士林", 2);
	ob.addInfo("士林", "劍潭", 2);
	ob.addInfo("劍潭", "圓山", 2);
	ob.addInfo("圓山", "民權西路", 2);

	cout << "From? ";

	cin.getline(from, 40);
	cout << "To? ";

	cin.getline(to, 40);

	// See if there is a route between from and to.
	ob.findroute(from, to);

	// If there is a route, show it.
	if(ob.routefound())
		ob.route();

	system("pause");
	return 0;
}