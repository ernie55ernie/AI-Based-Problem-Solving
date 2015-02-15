#include "DepthFirstSearch.h"
#include "BreadthFirstSearch.h"

int main(){
	char to[40], from[40];
	//DepthFirstSearch ob;
	BreadthFirstSearch ob;

	// Add red line station connections to database.
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
	ob.addInfo("民權西路", "雙連", 1);
	ob.addInfo("雙連", "中山", 1);
	ob.addInfo("中山", "台北車站", 2);
	ob.addInfo("台北車站", "台大醫院", 2);
	ob.addInfo("台大醫院", "中正紀念堂", 2);
	ob.addInfo("中正紀念堂", "東門", 3);
	ob.addInfo("東門", "大安森林公園", 2);
	ob.addInfo("大安森林公園", "大安", 2);
	ob.addInfo("大安", "信義安和", 2);
	ob.addInfo("信義安和", "台北101/世貿", 2);
	ob.addInfo("台北101/世貿", "象山", 2);

	// Add green line station connections to database
	ob.addInfo("松山", "南京三民", 3);
	ob.addInfo("南京三民", "台北小巨蛋", 2);
	ob.addInfo("台北小巨蛋", "南京復興", 2);
	ob.addInfo("南京復興", "松江南京", 2);
	ob.addInfo("松江南京", "中山", 2);
	ob.addInfo("中山", "北門", 2);
	ob.addInfo("北門", "西門", 2);
	ob.addInfo("西門", "小南門", 2);
	ob.addInfo("小南門", "中正紀念堂", 2);
	ob.addInfo("中正紀念堂", "古亭", 2);
	ob.addInfo("古亭", "台電大樓", 2);
	ob.addInfo("台電大樓", "公館", 2);
	ob.addInfo("公館", "萬隆", 2);
	ob.addInfo("萬隆", "景美", 2);
	ob.addInfo("景美", "大坪林", 2);
	ob.addInfo("大坪林", "七張", 2);
	ob.addInfo("七張", "小碧潭", 4);
	ob.addInfo("七張", "新店區公所", 2);
	ob.addInfo("新店區公所", "新店", 2);

	// Add brown line station connections to database
	ob.addInfo("南港展覽館", "南港軟體園區", 2);
	ob.addInfo("南港軟體園區", "東湖", 2);
	ob.addInfo("東湖", "葫洲", 2);
	ob.addInfo("葫洲", "大湖公園", 3);
	ob.addInfo("大湖公園", "內湖", 2);
	ob.addInfo("內湖", "文德", 2);
	ob.addInfo("文德", "港墘", 2);
	ob.addInfo("港墘", "西湖", 2);
	ob.addInfo("西湖", "劍南路", 2);
	ob.addInfo("劍南路", "大直", 2);
	ob.addInfo("大直", "松山機場", 3);
	ob.addInfo("松山機場", "中山國中", 3);
	ob.addInfo("中山國中", "南京復興", 2);
	ob.addInfo("南京復興", "忠孝復興", 2);
	ob.addInfo("忠孝復興", "大安", 2);
	ob.addInfo("大安", "科技大樓", 2);
	ob.addInfo("科技大樓", "六張犁", 3);
	ob.addInfo("六張犁", "麟光", 2);
	ob.addInfo("麟光", "辛亥", 3);
	ob.addInfo("辛亥", "萬芳醫院", 2);
	ob.addInfo("萬芳醫院", "萬芳社區", 2);
	ob.addInfo("萬芳社區", "木柵", 1);
	ob.addInfo("木柵", "動物園", 2);

	// Add yellow line station connections to database
	
	// Add blue line station connections to database

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