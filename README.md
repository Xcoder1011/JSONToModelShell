Description:
===================

通过url或者json数据快速创建OC model文件，可自定义文件名前缀，可随意继承BaseModel，只需修改以下两个参数，例如
```
yourProjectPrefix = 'NS'       
yourModelBaseClassName = 'BaseModel'   
```

默认是不加前缀，并且继承于NSObject


Usage:
===================


方式一：Get URL方式
-------------

> **主要步骤:**

> - 在终端中进入SKAutoJSONToModelShell.shell所在的文件夹路径下.
> - 执行脚本：python SKAutoJSONToModelShell.py.
> - 选择GET方式： 1
> - 输入URL：http://m.api.zhe800.com/tao800/bannerv2.json?platform=android&channelid=7aaa14&productkey=tao800&cityid=2&url_name=&userType=0&userRole=0&unlock=1
> - 输入Model名称(如果从url获取输入none)，例如输入Banner
> - 脚本执行结束，生成需要的.h和.m文件。



**Terminal Steps:**

```
KUNdeiMac:JSONToModelShell kun$ ls
Banner				SKAutoJSONToModelShell.py
README.md
KUNdeiMac:JSONToModelShell kun$ python SKAutoJSONToModelShell.py 
选择输入的内容类型
HTTP GET Url【1】
或者
返回的数据内容【2】
1
输入完整的GET Request Url: http://m.api.zhe800.com/tao800/bannerv2.json?platform=android&channelid=7aaa14&productkey=tao800&cityid=2&url_name=&userType=0&userRole=0&unlock=1
输入Model名称(从url获取输入none): Banner
生成Bannermodel中
生成BannerResponsemodel中
生成ChildTopicsmodel中
生成ChildTopicsmodel中
生成DealParamsmodel中
生成BannerResponsemodel中
生成ChildTopicsmodel中
生成ChildTopicsmodel中
生成DealParamsmodel中
生成BannerResponsemodel中
生成ChildTopicsmodel中
生成DealParamsmodel中
生成ChildTopicsmodel中
生成ChildTopicsmodel中
生成DealParamsmodel中
脚本执行结束，请复制model文件夹到您需要的地方
KUNdeiMac:JSONToModelShell kun$ 

```


方式二：JSON 字符串方式
-------------

> **主要步骤:**

> - 在终端中进入SKAutoJSONToModelShell.shell所在的文件夹路径下.
> - 执行脚本：python SKAutoJSONToModelShell.py.
> - 选择GET方式： 2
> - 输入JSON字符串
> - 输入Model名称，例如输入TopBanner
> - 脚本执行结束，生成需要的.h和.m文件。



**Terminal Steps:**

```
KUNdeiMac:JSONToModelShell kun$ ls
Banner				SKAutoJSONToModelShell.py
README.md
KUNdeiMac:JSONToModelShell kun$ python SKAutoJSONToModelShell.py 
选择输入的内容类型
HTTP GET Url【1】
或者
返回的数据内容【2】
2
输入Model名称: TopBanner
输入Json内容: 
完成后以回车结束
{
"banner_type": 1,
"category_name": "",
"child_topics": [],
"deal_params": {
"show_saleout": 0
},
"deal_url": "",
"detail": "",
"id": 13053,
"image_big_android_url": "http://z3.tuanimg.com/imagev2/wxyy/720x250.f2a031f909d112580efacf2526a3b2a5.jpg",
"image_big_ios_url": "http://z3.tuanimg.com/imagev2/wxyy/640x244.048cfb9088210a4b5d43e5e8444a742f.jpg",
"image_category_android_url": "",
"image_category_ios_url": "",
"image_largest_android_url": "",
"image_largest_ios_url": "",
"image_little_android_url": "",
"image_little_ios_url": "",
"image_middle_android_url": "",
"image_middle_ios_url": "",
"image_plugin_url": "",
"image_registration_android_url": "",
"image_registration_ios_url": "",
"image_youpinhui_url": "",
"is_plugin": 0,
"parent_url_name": "",
"show_model": 0,
"title": "省薪说 家装好物",
"value": "",
"wap_url": "http://hd.zhe800.com/xindacu/app/xrcd0621"
}

生成TopBannermodel中
生成ChildTopicsmodel中
生成DealParamsmodel中
生成ChildTopicsmodel中
生成ChildTopicsmodel中
生成DealParamsmodel中
脚本执行结束，请复制model文件夹到您需要的地方
KUNdeiMac:JSONToModelShell kun$ 
```
