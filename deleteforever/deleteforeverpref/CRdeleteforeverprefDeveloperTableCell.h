#import <Preferences/Preferences.h>
#import "CRdeleteforeverprefLocalizer.h"
@interface CRdeleteforeverprefDeveloperTableCell : PSTableCell
{
	NSString *_user;
}
@property (nonatomic,strong) UIImageView *devImageView;
@property (nonatomic,strong) UILabel *devNameLabel;
@property (nonatomic,strong) UILabel *realNameLabel;
@property (nonatomic,strong) UILabel *jobLabel;
-(id)initWithDevName:(NSString *)devName realName:(NSString *)realName jobSubtitle:(NSString *)job devImage:(UIImage *)devImage;
@end