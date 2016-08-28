//
// Auto Create JsonModel File
// BannerResponseItemModel.h
//
//

#import "NSObject.h"

@protocol BannerResponseItemModel

@end
#import "ChildTopicsItemModel.h"
#import "DealParamsModel.h"



@interface BannerResponseItemModel : NSObject

@property (nonatomic, strong) NSString<Optional> *image_plugin_url;
@property (nonatomic, strong) NSString<Optional> *image_largest_android_url;
@property (nonatomic, strong) NSNumber<Optional> *show_model;
@property (nonatomic, strong) NSString<Optional> *image_middle_ios_url;
@property (nonatomic, strong) NSNumber<Optional> *is_plugin;
@property (nonatomic, strong) NSString<Optional> *image_little_ios_url;
@property (nonatomic, strong) NSNumber<Optional> *id;
@property (nonatomic, strong) NSString<Optional> *title;
@property (nonatomic, strong) NSString<Optional> *image_big_android_url;
@property (nonatomic, strong) NSString<Optional> *detail;
@property (nonatomic, strong) NSString<Optional> *image_largest_ios_url;
@property (nonatomic, strong) NSString<Optional> *image_category_ios_url;

@property (nonatomic, strong) NSArray<Optional, ChildTopicsItemModel> *child_topics;
@property (nonatomic, strong) NSString<Optional> *deal_url;
@property (nonatomic, strong) NSString<Optional> *image_registration_android_url;
@property (nonatomic, strong) NSString<Optional> *image_category_android_url;
@property (nonatomic, strong) NSString<Optional> *category_name;
@property (nonatomic, strong) NSString<Optional> *wap_url;
@property (nonatomic, strong) NSString<Optional> *image_youpinhui_url;
@property (nonatomic, strong) NSString<Optional> *image_little_android_url;
@property (nonatomic, strong) NSString<Optional> *image_middle_android_url;
@property (nonatomic, strong) NSString<Optional> *image_registration_ios_url;
@property (nonatomic, strong) NSString<Optional> *value;
@property (nonatomic, strong) NSString<Optional> *parent_url_name;

@property (nonatomic, strong) DealParamsModel<Optional> *deal_params;
@property (nonatomic, strong) NSNumber<Optional> *banner_type;
@property (nonatomic, strong) NSString<Optional> *image_big_ios_url;

@end