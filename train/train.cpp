#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

class Cities {
public:
	tuple<bool, string> FindCountry(const string& desired_city) const {
		string result;
		for (const auto& country : country_to_cities)
		{
			result = country.first;
			for (const auto& city : country.second)
			{
				if (city == desired_city)
				{
					return tuple<bool, string>(true, result);
				}
			}
		}
		return tuple<bool, string>(false, "Not exists");
	}
private:
	map<string, vector<string>> country_to_cities{

	{"USA",
		{ "Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", "Connecticut", "Delaware", "Florida",
		"Georgia", "Hawaii", "Idaho", "Illinois", "Indiana", "Iowa", "Kansas", "Kentucky",
		"Louisiana", "Maine", "Maryland", "Massachusetts", "Michigan", "Minnesota", "Mississippi", "Missouri",
		"Montana", "Nebraska", "Nevada", "New Hampshire", "New Jersey", "New Mexico", "New York", "North Carolina",
		"North Dakota", "Ohio", "Oklahoma", "Oregon", "Pennsylvania", "Rhode Island", "South Carolina", "South Dakota",
		"Tennessee", "Texas", "Utah", "Vermont", "Virginia", "Washington", "West Virginia", "Wisconsin", "Wyoming"}
	},

	{"Russia",
		{ "Moscow", "Saint Petersburg", "Novosibirsk", "Yekaterinburg", "Nizhny Novgorod", "Kazan", "Chelyabinsk", "Omsk", "Samara", "Ufa", "Rostov-on-Don",
		"Krasnoyarsk", "Voronezh", "Perm", "Volgograd", "Krasnodar", "Saratov", "Tyumen", "Makhachkala", "Tolyatti", "Barnaul",
		"Ulyanovsk", "Izhevsk", "Vladivostok", "Irkutsk", "Khabarovsk", "Yaroslavl", "Tomsk", "Orenburg", "Kemerovo", "Novokuznetsk",
		"Tula", "Ryazan", "Kirov", "Astrakhan", "Naberezhnye Chelny", "Sochi", "Penza", "Lipetsk", "Cheboksary", "Balashikha",
		"Kaliningrad", "Kursk", "Stavropol", "Ulan-Ude", "Bryansk", "Tver", "Magnitogorsk", "Ivanovo", "Belgorod", "Surgut",
		"Vladimir", "Arkhangelsk", "Nizhny Tagil", "Kaluga", "Chita", "Saransk", "Yakutsk", "Smolensk", "Podolsk", "Volzhsky",
		"Vladikavkaz", "Vologda", "Cherepovets", "Kurgan", "Oryol", "Grozny", "Murmansk", "Tambov", "Petrozavodsk", "Sterlitamak",
		"Kostroma", "Nizhnevartovsk", "Novorossiysk", "Yoshkar-Ola", "Taganrog", "Komsomolsk-on-Amur", "Khimki", "Syktyvkar", "Nalchik", "Nizhnekamsk",
		"Shakhty", "Dzerzhinsk", "Bratsk", "Orsk", "Angarsk", "Engels", "Blagoveshchensk", "Stary Oskol", "Veliky Novgorod", "Korolyov",
		"Pskov", "Mytishchi", "Biysk", "Lyubertsy", "Prokopyevsk", "Yuzhno-Sakhalinsk", "Balakovo", "Armavir", "Rybinsk", "Severodvinsk",
		"Abakan", "Petropavlovsk-Kamchatsky", "Norilsk", "Syzran", "Volgodonsk", "Ussuriysk", "Kamensk-Uralsky", "Novocherkassk", "Zlatoust", "Elektrostal",
		"Almetyevsk", "Krasnogorsk", "Salavat", "Miass", "Nakhodka", "Kopeysk", "Pyatigorsk", "Rubtsovsk", "Berezniki", "Kolomna",
		"Maykop", "Odintsovo", "Khasavyurt", "Kovrov", "Kislovodsk", "Neftekamsk", "Nefteyugansk", "Novocheboksarsk", "Serpukhov", "Shchyolkovo",
		"Novomoskovsk", "Bataysk", "Pervouralsk", "Domodedovo", "Derbent", "Cherkessk", "Orekhovo-Zuyevo", "Nevinnomyssk", "Dimitrovgrad", "Nazran",
		"Kyzyl", "Oktyabrsky", "Obninsk", "Kaspiysk", "Novy Urengoy", "Ramenskoye", "Kamyshin", "Murom", "Zhukovsky", "Novoshakhtinsk",
		"Seversk", "Yessentuki", "Noyabrsk", "Artyom", "Pushkino", "Achinsk", "Yelets", "Sergiyev Posad", "Arzamas", "Dolgoprudny",
		"Elista", "Berdsk", "Novokuybyshevsk", "Noginsk", "Zheleznogorsk", "Reutov", "Zelenodolsk", "Tobolsk", "Khanty-Mansiysk", "Votkinsk",
		"Sarapul", "Mezhdurechensk", "Ukhta", "Serov", "Leninsk-Kuznetsky", "Gatchina", "Sarov", "Solikamsk", "Voskresensk", "Michurinsk",
		"Glazov", "Velikiye Luki", "Magadan", "Kiselyovsk", "Kansk", "Kamensk-Shakhtinsky", "Novotroitsk", "Mikhaylovsk", "Lobnya", "Gubkin",
		"Buzuluk", "Bugulma", "Yeysk", "Zheleznogorsk", "Kineshma", "Chaykovsky", "Kuznetsk", "Ust-Ilimsk", "Yurga", "Novouralsk",
		"Azov", "Ozyorsk", "Kropotkin", "Klin", "Vyborg", "Bor", "Usolye-Sibirskoye", "Balashov", "Shadrinsk", "Mineralnye Vody",
		"Anapa", "Troitsk", "Dubna", "Gelendzhik", "Chernogorsk", "Ivanteyevka", "Birobidzhan", "Yelabuga", "Yegoryevsk", "Novoaltaysk",
		"Kirovo-Chepetsk", "Chapayevsk", "Belovo", "Anzhero-Sudzhensk", "Chekhov", "Vsevolozhsk", "Verkhnyaya Pyshma", "Georgiyevsk", "Tuymazy", "Minusinsk",
		"Sosnovy Bor", "Kstovo", "Dmitrov", "Belogorsk", "Stupino", "Gukovo", "Kungur", "Slavyansk-na-Kubani", "Beloretsk", "Pavlovsky Posad",
		"Ishimbay", "Ishim", "Vidnoye", "Zarechny", "Kogalym", "Asbest", "Buynaksk", "Volsk", "Donskoy", "Gorno-Altaysk",
		"Leninogorsk", "Rossosh", "Tuapse", "Klintsy", "Budyonnovsk", "Borisoglebsk", "Revda", "Lysva", "Zelenogorsk", "Polevskoy",
		"Naro-Fominsk", "Kotlas", "Sibay", "Labinsk", "Kumertau", "Chistopol", "Fryazino", "Rzhev", "Lesosibirsk", "Alexandrov",
		"Belebey", "Tikhoretsk", "Shuya", "Urus-Martan", "Meleuz", "Mikhaylovka", "Aleksin", "Salsk", "Pavlovo", "Izberbash",
		"Vorkuta", "Shchyokino", "Tikhvin", "Prokhladny", "Nyagan", "Lytkarino", "Krasnoturyinsk", "Krymsk", "Neryungri", "Beryozovsky",
		"Iskitim", "Apatity", "Gus-Khrustalny", "Dzerzhinsky", "Volzhsk", "Zhigulyovsk", "Liski", "Svobodny", "Krasnokamsk", "Vyksa",
		"Vyazma", "Shali", "Krasnokamensk", "Arsenyev", "Solnechnogorsk", "Timashyovsk", "Belorechensk", "Kirishi", "Uzlovaya", "Gudermes",
		"Sertolovo", "Cheremkhovo", "Severomorsk", "Borovichi", "Roslavl", "Snezhinsk", "Nazarovo" }
	},

	{"France",
		{ "Paris", "Marseille", "Lyon", "Toulouse", "Nice", "Nantes", "Strasbourg", "Montpellier", "Bordeaux", "Lille", "Rennes",
		"Reims", "Le Havre", "Saint-Étienne", "Toulon", "Grenoble", "Dijon", "Nîmes", "Angers", "Villeurbanne", "Le Mans",
		"Saint-Denis", "Aix-en-Provence", "Clermont-Ferrand", "Brest", "Limoges", "Tours", "Amiens", "Perpignan", "Metz", "Besançon",
		"Boulogne-Billancourt", "Orléans", "Mulhouse", "Rouen", "Saint-Denis", "Caen", "Argenteuil", "Saint-Paul", "Montreuil", "Nancy",
		"Roubaix", "Tourcoing", "Nanterre", "Avignon", "Vitry-sur-Seine", "Créteil", "Dunkirk", "Poitiers", "Asnières-sur-Seine", "Courbevoie",
		"Versailles", "Colombes", "Fort-de-France", "Aulnay-sous-Bois", "Saint-Pierre", "Rueil-Malmaison", "Pau", "Aubervilliers", "Le Tampon", "Champigny-sur-Marne",
		"Antibes", "Béziers", "La Rochelle", "Saint-Maur-des-Fossés", "Cannes", "Calais", "Saint-Nazaire", "Mérignac", "Drancy", "Colmar",
		"Ajaccio" }
	},

	{"Italy",
		{ "Rome", "Milan", "Naples", "Turin", "Palermo", "Genoa", "Bologna", "Florence", "Bari", "Catania", "Venice",
		"Verona", "Messina", "Padua", "Trieste", "Brescia", "Taranto", "Parma", "Prato", "Modena", "Reggio Calabria",
		"Reggio Emilia", "Perugia", "Livorno", "Ravenna", "Cagliari", "Foggia", "Rimini", "Salerno", "Ferrara", "Sassari",
		"Latina", "Giugliano in Campania", "Monza", "Syracuse", "Bergamo", "Pescara", "Trento", "Forlì", "Vicenza", "Terni",
		"Bolzano", "Novara", "Piacenza", "Ancona", "Andria", "Udine", "Arezzo", "Cesena", "Lecce", "Pesaro",
		"Barletta", "Alessandria", "La Spezia", "Pistoia", "Pisa", "Catanzaro", "Guidonia Montecelio", "Lucca", "Brindisi", "Torre del Greco",
		"Treviso", "Busto Arsizio", "Como", "Marsala", "Grosseto", "Sesto San Giovanni", "Pozzuoli", "Varese", "Fiumicino", "Casoria",
		"Asti", "Cinisello Balsamo", "Caserta", "Gela", "Aprilia", "Ragusa", "Pavia", "Cremona", "Carpi", "Quartu Sant'Elena",
		"Lamezia Terme", "Altamura", "Imola", "L’Aquila", "Massa", "Trapani", "Viterbo", "Cosenza", "Potenza", "Castellammare di Stabia",
		"Afragola", "Vittoria", "Crotone", "Pomezia", "Vigevano", "Carrara", "Caltanissetta", "Viareggio", "Fano", "Savona",
		"Matera", "Olbia", "Legnano", "Acerra", "Marano di Napoli", "Benevento", "Molfetta", "Agrigento", "Faenza", "Cerignola",
		"Moncalieri", "Foligno", "Manfredonia", "Tivoli", "Cuneo", "Trani", "Bisceglie", "Bitonto", "Bagheria", "Anzio",
		"Portici", "Modica", "Sanremo", "Avellino", "Teramo", "Montesilvano", "Siena", "Gallarate", "Velletri", "Cava de' Tirreni",
		"San Severo", "Aversa", "Ercolano", "Civitavecchia", "Acireale", "Mazara del Vallo", "Rovigo", "Pordenone", "Battipaglia", "Rho",
		"Chieti", "Scafati", "Scandicci" }
	},

	{"Germany",
		{ "Berlin", "Hamburg", "Munich / München", "Cologne / Köln", "Frankfurt am Main", "Stuttgart", "Duesseldorf", "Dortmund", "Essen",
		"Bremen", "Dresden", "Leipzig", "Hanover", "Nuremberg", "Duisburg", "Bochum", "Wuppertal",
		"Bonn", "Bielefeld", "Mannheim", "Karlsruhe", "Münster", "Wiesbaden", "Augsburg", "Aachen",
		"Mönchengladbach", "Gelsenkirchen", "Brunswick / Braunschweig", "Chemnitz", "Kiel", "Krefeld", "Halle", "Magdeburg",
		"Freiburg", "Oberhausen", "Lübeck", "Erfurt", "Rostock", "Mainz", "Kassel", "Hagen",
		"Hamm", "Saarbrücken", "Mülheim", "Herne", "Ludwigshafen", "Osnabrück", "Oldenburg", "Leverkusen",
		"Solingen", "Potsdam", "Neuss", "Heidelberg", "Paderborn", "Darmstadt", "Regensburg", "Würzburg",
		"Ingolstadt", "Heilbronn", "Ulm", "Wolfsburg", "Göttingen", "Offenbach", "Pforzheim", "Recklinghausen",
		"Bottrop", "Fürth", "Bremerhaven", "Reutlingen", "Remscheid", "Koblenz", "Bergisch Gladbach", "Erlangen",
		"Moers", "Trier", "Jena", "Siegen", "Hildesheim", "Salzgitter", "Cottbus" }
	},
	
	{"United Kingdoms",
		{"Birmingham", "Leeds", "Bradford", "Manchester", "Liverpool", "Bristol", "Cardiff", "Belfast", "Wakefield",
		"London", "Nottingham", "Sunderland", "Plymouth", "Derby", "Salford", "York", "Portsmouth", "Westminster",
		"Peterborough", "Chelmsford", "Oxford", "Canterbury", "Saint Albans", "Norwich", "Cambridge", "Preston",
		"Gloucester", "Exeter", "Winchester", "Carlisle", "Durham", "Lincoln", "Chester", "Bath", "Hereford",
		"Salisbury", "Lichfield", "Chichester", "Wells"}
	},
	
	{"Spain",
		{ "Alicante", "Badajoz", "Ciudad Real", "Cuenca", "Lalín", "Las Palmas de Gran Canaria", "Lleida", "Logroño", "Lugo",
		"Madrid", "Merida", "Murcia", "Oviedo", "Palma de Mallorca", "Pamplona", "Salamanca" }
	},
	
	{"China",
		{ "Hong Kong", "Macau", "Beijing", "Chongqing", "Shanghai", "Tianjin", "Anqing", "Bengbu", "Bozhou",
		"Chaohu", "Chizhou", "Chuzhou", "Fuyang", "Guangde", "Hefei", "Huaibei", "Huainan",
		"Huangshan", "Jieshou", "Lu'an", "Ma'anshan", "Mingguang", "Ningguo", "Qianshan", "Suzhou",
		"Tianchang", "Tongcheng", "Tongling", "Wuhu", "Wuwei", "Xuancheng", "Fu'an", "Fuding",
		"Fuqing", "Fuzhou", "Jian'ou", "Jinjiang", "Longhai", "Longyan", "Nan'an", "Nanping",
		"Ningde", "Putian", "Quanzhou", "Sanming", "Shaowu", "Shishi", "Wuyishan", "Xiamen",
		"Yong'an", "Zhangping", "Zhangzhou", "Baiyin", "Dingxi", "Dunhuang", "Hezuo", "Huating",
		"Jiayuguan", "Jinchang", "Jiuquan", "Lanzhou", "Linxia", "Longnan", "Pingliang", "Qingyang",
		"Tianshui", "Wuwei", "Yumen", "Zhangye", "Chaozhou", "Dongguan", "Enping", "Foshan",
		"Gaozhou", "Guangzhou", "Heshan", "Heyuan", "Huazhou", "Huizhou", "Jiangmen", "Jieyang",
		"Kaiping", "Lechang", "Leizhou", "Lianjiang", "Lianzhou", "Lufeng", "Luoding", "Maoming",
		"Meizhou", "Nanxiong", "Puning", "Qingyuan", "Shantou", "Shanwei", "Shaoguan", "Shenzhen",
		"Sihui", "Taishan", "Wuchuan", "Xingning", "Xinyi", "Yangchun", "Yangjiang", "Yingde",
		"Yunfu", "Zhanjiang", "Zhaoqing", "Zhongshan", "Zhuhai", "Baise", "Beihai", "Beiliu",
		"Cenxi", "Chongzuo", "Dongxing", "Fangchenggang", "Guigang", "Guilin", "Guiping", "Hechi",
		"Heshan", "Hezhou", "Jingxi", "Laibin", "Lipu", "Liuzhou", "Nanning", "Pingguo",
		"Pingxiang", "Qinzhou", "Wuzhou", "Yulin", "Anshun", "Bijie", "Chishui", "Duyun",
		"Fuquan", "Guiyang", "Kaili", "Liupanshui", "Panzhou", "Qingzhen", "Renhuai", "Tongren",
		"Xingren", "Xingyi", "Zunyi", "Danzhou", "Dongfang", "Haikou", "Qionghai", "Sansha",
		"Sanya", "Wanning", "Wenchang", "Wuzhishan", "Anguo" }
	},

	{"India",
		{ "Bangalore", "Chennai", "Delhi", "Hyderabad", "Kolkata", "Mumbai", "Ahmedabad", "Coimbatore", "Jaipur",
		"Kanpur", "Lucknow", "Nagpur", "Pune", "Surat", "Tiruchirapalli", "Visakhapatnam", "Vijayawada",
		"Bhopal", "Vadodara", "Ludhiana", "Agra", "Nashik", "Kakinada", "Madurai", "Faridabad",
		"Varanasi", "Kochi", "Rajkot", "Rajahmundry", "Jabalpur", "Jamshedpur", "Allahabad", "Amritsar",
		"Indore", "Dhanbad", "Dharwad", "Bhavnagar", "Raipur", "Mysore", "Mangalore", "Guntur",
		"Warangal", "Bhubaneshwar", "Amravati", "Aurangabad", "Srinagar", "Bhilai", "Nellore", "Solapur",
		"Thiruvananthapuram", "Ranchi", "Guwahati", "Gwalior", "Chandigarh", "Jodhpur", "Tiruchirapalli", "Puducherry",
		"Jalandhar", "Dehradun", "Sangli", "Kozhikode", "Jamnagar", "Jammu", "Belgaum" }
	},

	{"Indonesia",
		{ "Denpasar", "Bandung", "Batu", "Bekasi", "Blitar", "Bogor", "Cianjur", "Cilegon", "Cimahi",
		"Cirebon", "Depok", "Jakarta", "Madiun", "Magelang", "Malang", "Mojokerto", "Pasuruan",
		"Pekalongan", "Probolinggo", "Salatiga", "Semarang", "South Tangerang", "Sukabumi", "Surabaya", "Surakarta",
		"Tasikmalaya", "Tangerang", "Tegal", "Yogyakarta", "Kediri", "Serang", "Purwokerto", "Balikpapan",
		"Banjarbaru", "Banjarmasin", "Bontang", "Palangkaraya", "Pontianak", "Samarinda", "Singkawang", "Tarakan",
		"Tenggarong", "Ambon", "Tual", "Ternate", "Tidore", "Bima", "Mataram", "Kupang",
		"Jayapura", "Merauke", "Kota Sorong", "Manokwari", "Bau-Bau", "Bitung", "Gorontalo", "Kendari",
		"Makassar", "Manado", "Palu", "Pare-Pare", "Palopo", "Tomohon", "Banda Aceh", "Bandar Lampung",
		"Batam", "Bengkulu", "Blangkejeren", "Binjai", "Bireuen", "Bukittinggi", "Dumai", "Jambi",
		"Langsa", "Lhokseumawe", "Lubuklinggau", "Meulaboh", "Medan", "Metro", "Padang", "Padang Panjang",
		"Padang Sidempuan", "Pagar Alam", "Palembang", "Pangkal Pinang", "Pariaman", "Payakumbuh", "Pekanbaru", "Pematang Siantar",
		"Prabumulih", "Sigli", "Redelong", "Sabang", "Sawah Lunto", "Sibolga", "Sigli", "Singkil",
		"Solok", "Takengon", "Tapaktuan", "Tanjung Balai", "Tanjung Pinang", "Tebing Tinggi" }
	},

	{"Brazil",
		{}
	},

	{"Canada",
		{ "Airdrie", "Beaumont", "Brooks", "Calgary", "Camrose", "Chestermere", "Cold Lake", "Edmonton", "Fort Saskatchewan",
		"Grande Prairie", "Lacombe", "Leduc", "Lethbridge", "Lloydminster", "Medicine Hat", "Red Deer", "Spruce Grove",
		"St. Albert", "Wetaskiwin", "Abbotsford", "Armstrong", "Burnaby", "Campbell River", "Castlegar", "Chilliwack",
		"Colwood", "Coquitlam", "Courtenay", "Cranbrook", "Dawson Creek", "Delta", "Duncan", "Enderby",
		"Fernie", "Fort St. John", "Grand Forks", "Greenwood", "Kamloops", "Kelowna", "Kimberley", "Langford",
		"Langley", "Maple Ridge", "Merritt", "Nanaimo", "Nelson", "New Westminster", "North Vancouver", "Parksville",
		"Penticton", "Pitt Meadows", "Port Alberni", "Port Coquitlam", "Port Moody", "Powell River", "Prince George", "Prince Rupert",
		"Quesnel", "Revelstoke", "Richmond", "Rossland", "Salmon Arm", "Surrey", "Terrace", "Trail",
		"Vancouver", "Vernon", "Victoria", "West Kelowna", "White Rock", "Williams Lake", "Brandon", "Dauphin",
		"Flin Flon", "Morden", "Portage la Prairie", "Selkirk", "Steinbach", "Thompson", "Winkler", "Winnipeg",
		"Bathurst", "Campbellton", "Dieppe", "Edmundston", "Fredericton", "Miramichi", "Moncton", "Saint John",
		"Corner Brook", "Mount Pearl", "St. John's", "Yellowknife", "Iqaluit", "Barrie", "Belleville", "Brampton",
		"Brant", "Brantford", "Brockville", "Burlington", "Cambridge", "Clarence-Rockland", "Cornwall", "Dryden",
		"Elliot Lake", "Greater Sudbury", "Guelph", "Haldimand County", "Hamilton", "Kawartha Lakes", "Kenora", "Kingston",
		"Kitchener", "London", "Markham", "Mississauga", "Niagara Falls", "Norfolk County", "North Bay", "Orillia",
		"Oshawa", "Ottawa", "Owen Sound", "Pembroke", "Peterborough", "Pickering", "Port Colborne", "Prince Edward County",
		"Quinte West", "Richmond Hill", "Sarnia", "Sault Ste. Marie", "St. Catharines", "St. Thomas", "Stratford", "Temiskaming Shores",
		"Thorold", "Thunder Bay", "Timmins", "Toronto", "Vaughan", "Waterloo", "Welland", "Windsor",
		"Woodstock", "Charlottetown", "Summerside" }
	},

	{"Japan",
		{}
	},

	{"Mexico",
		{"Mexico City", "Ecatepec", "Guadalajara", "Puebla", "Juárez", "Tijuana", "León", "Monterrey", "Zapopan",
		"Nezahualcóyotl", "Culiacán", "Chihuahua", "Naucalpan", "Mérida", "San Luis Potosí", "Aguascalientes", "Hermosillo",
		"Saltillo", "Mexicali", "Guadalupe", "Acapulco", "Tlalnepantla", "Cancún", "Querétaro", "Chimalhuacán",
		"Torreón", "Morelia", "Reynosa", "Tlaquepaque", "Tuxtla Gutiérrez", "Durango", "Toluca", "Ciudad López Mateos",
		"Cuautitlán Izcalli", "Ciudad Apodaca", "Matamoros", "San Nicolás de los Garza", "Veracruz", "Xalapa", "Tonalá", "Mazatlán",
		"Irapuato", "Nuevo Laredo", "Xico", "Villahermosa", "General Escobedo", "Celaya", "Cuernavaca", "Tepic",
		"Ixtapaluca", "Ciudad Victoria", "Ciudad Obregón", "Tampico", "Ciudad Nicolás Romero", "Ensenada", "Coacalco de Berriozábal", "Santa Catarina",
		"Uruapan", "Gómez Palacio", "Los Mochis", "Pachuca", "Oaxaca", "Soledad de Graciano Sánchez", "Tehuacán", "Ojo de Agua",
		"Coatzacoalcos", "Campeche", "Monclova", "La Paz", "Nogales", "Buenavista", "Puerto Vallarta", "Tapachula",
		"Ciudad Madero", "San Pablo de las Salinas", "Chilpancingo", "Poza Rica", "Chicoloapan de Juárez", "Ciudad del Carmen", "Chalco de Díaz Covarrubias", "Jiutepec",
		"Salamanca", "San Luis Río Colorado", "Cuautla", "Ciudad Benito Juárez", "Chetumal", "Piedras Negras", "Playa del Carmen", "Zamora",
		"Córdoba", "San Juan del Río", "Colima", "Ciudad Acuña", "Manzanillo", "Zacatecas", "Veracruz", "Ciudad Valles",
		"Guadalupe", "San Pedro Garza García", "Naucalpan", "Fresnillo", "Orizaba", "Miramar", "Iguala", "Delicias",
		"Ciudad de Villa de Álvarez", "Ciudad Cuauhtémoc", "Navojoa", "Guaymas", "Minatitlán", "Cuautitlán", "Texcoco", "Hidalgo del Parral",
		"Tepexpan", "Tulancingo"}
	},

	{"Ethiopia",
		{}
	},

	{ "Philippines",
		{}
	},

	{ "Egypt",
		{}
	},

	{ "Vietnam",
		{}
	},

	{ "Iran",
		{}
	},

	{ "Turkey",
		{}
	},

	{ "Thailand",
		{}
	},

	{ "Estonia",
		{ "Tallinn", "Tartu", "Narva", "Pärnu", "Kohtla-Järve", "Viljandi", "Rakvere", "Maardu", "Kuressaare",
		"Sillamäe", "Valga", "Võru", "Jõhvi", "Haapsalu", "Keila", "Paide", "Elva",
		"Saue", "Põlva", "Tapa", "Jõgeva", "Rapla", "Kiviõli", "Türi", "Põltsamaa",
		"Sindi", "Paldiski", "Kärdla", "Kunda", "Tõrva", "Narva-Jõesuu", "Kehra", "Loksa",
		"Räpina", "Otepää", "Tamsalu", "Kilingi-Nõmme", "Karksi-Nuia", "Antsla", "Võhma", "Mustvee",
		"Lihula", "Suure-Jaani", "Abja-Paluoja", "Püssi", "Mõisaküla", "Kallaste" }
	},

	{ "Latvia",
		{ "Riga", "Daugavpils", "Liepāja", "Jelgava", "Jūrmala", "Ventspils", "Rēzekne", "Jēkabpils", "Valmiera",
		"Ogre", "Tukums", "Cēsis", "Salaspils", "Bolderaja", "Kuldīga", "Olaine", "Saldus",
		"Talsi", "Dobele", "Krāslava", "Bauska", "Ludza", "Sigulda", "Līvāni", "Daugavgrīva",
		"Gulbene", "Madona", "Limbaži", "Aizkraukle", "Preiļi", "Balvi", "Karosta", "Krustpils",
		"Valka", "Smiltene", "Aizpute", "Lielvārde", "Ķekava", "Mežaparks", "Grobiņa", "Vangaži",
		"Iecava", "Viļāni", "Baloži", "Pļaviņas", "Rūjiena", "Kandava", "Brocēni", "Salacgrīva",
		"Ozolnieki", "Ikšķile", "Saulkrasti", "Auce", "Piņķi", "Ilūkste", "Skrīveri", "Ulbroka",
		"Dagda", "Jaunciems", "Skrunda", "Kārsava", "Priekule", "Priekuļi", "Vecumnieki", "Mazsalaca",
		"Ķegums", "Alūksne", "Ērgļi", "Jumprava", "Viesīte", "Tērvete", "Varakļāni", "Tīreļi",
		"Inčukalns", "Baldone", "Stende", "Jaunjelgava", "Lubāna", "Zilupe", "Mērsrags", "Cesvaine",
		"Roja", "Seda", "Engure", "Strenči", "Sabile", "Viļaka", "Ape", "Aloja",
		"Valdemārpils", "Līgatne", "Aknīste", "Nereta", "Ainaži", "Staicele", "Pāvilosta", "Piltene",
		"Jaunaglona", "Jaunpils", "Alsunga", "Smārde", "Vecpiebalga" }
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},

	{ "Italy",
		{}
	},
	};
	set<string> ambiguious_cities;
};

int main() {
	setlocale(0, "");
	string city;
	cout << "Введите на название города на английском и программа покажет, в какой стране находится город" << endl;
	cin >> city;
	Cities city1;
	auto t = city1.FindCountry(city);
	cout << get<1>(t);
	system("pause");
}