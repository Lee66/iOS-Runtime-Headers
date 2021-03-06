/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeMultiView : MFComposeHeaderView {
    bool  _accountAutoselected;
    NSString * _accountDescription;
    bool  _accountHasUnsafeDomain;
    UILabel * _accountLabel;
    MFHeaderLabelView * _imageSizeHeaderLabelView;
    UILabel * _imageSizeLabel;
    bool  _imageSizeShown;
    UILabel * _placeholderImageSizeLabel;
}

@property (getter=isAccountAutoselected, nonatomic) bool accountAutoselected;
@property (nonatomic) bool accountHasUnsafeDomain;

- (id)_accountDescriptionAttributedString;
- (bool)accountHasUnsafeDomain;
- (id)accountLabel;
- (void)dealloc;
- (id)imageSizeHeaderLabelView;
- (id)imageSizeLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccountAutoselected;
- (id)labelColor;
- (void)layoutSubviews;
- (id)placeholderImageSizeLabel;
- (void)refreshPreferredContentSize;
- (void)setAccountAutoselected:(bool)arg1;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountHasUnsafeDomain:(bool)arg1;
- (void)setImageSizeDescription:(id)arg1;
- (void)setShowsImageSize:(bool)arg1;

@end
