//
// Auto Create JsonModel File
// TopBannerModel.h
//
//

#import <Foundation/Foundation.h>
#import "ChildTopicsItemModel.h"
#import "DealParamsModel.h"



@interface TopBannerModel : NSObject

@property (nonatomic, copy  ) NSString  *image_plugin_url;
@property (nonatomic, copy  ) NSString  *image_largest_android_url;
@property (nonatomic, strong) NSNumber  *show_model;
@property (nonatomic, copy  ) NSString  *image_middle_ios_url;
@property (nonatomic, strong) NSNumber  *is_plugin;
@property (nonatomic, copy  ) NSString  *image_little_ios_url;
@property (nonatomic, strong) NSNumber  *id;
@property (nonatomic, copy  ) NSString  *title;
@property (nonatomic, copy  ) NSString  *image_big_android_url;
@property (nonatomic, copy  ) NSString  *detail;
@property (nonatomic, copy  ) NSString  *image_largest_ios_url;
@property (nonatomic, copy  ) NSString  *image_category_ios_url;

@property (nonatomic, strong) NSArray<ChildTopicsItemModel >  *child_topics;
@property (nonatomic, copy  ) NSString  *deal_url;
@property (nonatomic, copy  ) NSString  *image_registration_android_url;
@property (nonatomic, copy  ) NSString  *image_category_android_url;
@property (nonatomic, copy  ) NSString  *category_name;
@property (nonatomic, copy  ) NSString  *wap_url;
@property (nonatomic, copy  ) NSString  *image_youpinhui_url;
@property (nonatomic, copy  ) NSString  *image_little_android_url;
@property (nonatomic, copy  ) NSString  *image_middle_android_url;
@property (nonatomic, copy  ) NSString  *image_registration_ios_url;
@property (nonatomic, copy  ) NSString  *value;
@property (nonatomic, copy  ) NSString  *parent_url_name;

@property (nonatomic, strong) DealParamsModel  *deal_params;
@property (nonatomic, strong) NSNumber  *banner_type;
@property (nonatomic, copy  ) NSString  *image_big_ios_url;

@end