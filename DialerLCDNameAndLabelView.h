/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobilePhone-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DialerLCDNameAndLabelView : XXUnknownSuperclass {
	NSString* _name;
	NSString* _label;
	float fontSize;
	BOOL _highlighted;
}
@property(assign, nonatomic) float fontSize;
-(void)drawRect:(CGRect)rect;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setLabel:(id)label;
-(id)name;
-(void)setName:(id)name;
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

