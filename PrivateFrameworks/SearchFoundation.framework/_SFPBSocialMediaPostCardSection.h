/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBSocialMediaPostCardSection : PBCodable <NSSecureCoding, _SFPBSocialMediaPostCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSString * _footnote;
    NSString * _handle;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int nameNoWrap : 1; 
        unsigned int nameMaxLines : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSString * _name;
    int  _nameMaxLines;
    bool  _nameNoWrap;
    _SFPBImage * _picture;
    _SFPBRichText * _post;
    _SFPBImage * _profilePicture;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _timestamp;
    NSString * _type;
    _SFPBImage * _verifiedGlyph;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasCanBeHidden;
@property (nonatomic, readonly) bool hasFootnote;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic, readonly) bool hasHasBottomPadding;
@property (nonatomic, readonly) bool hasHasTopPadding;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameMaxLines;
@property (nonatomic, readonly) bool hasNameNoWrap;
@property (nonatomic, readonly) bool hasPicture;
@property (nonatomic, readonly) bool hasPost;
@property (nonatomic, readonly) bool hasProfilePicture;
@property (nonatomic, readonly) bool hasPunchoutPickerDismissText;
@property (nonatomic, readonly) bool hasPunchoutPickerTitle;
@property (nonatomic, readonly) bool hasSeparatorStyle;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic) bool hasTopPadding;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, readonly) bool hasVerifiedGlyph;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int nameMaxLines;
@property (nonatomic) bool nameNoWrap;
@property (nonatomic, retain) _SFPBImage *picture;
@property (nonatomic, retain) _SFPBRichText *post;
@property (nonatomic, retain) _SFPBImage *profilePicture;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timestamp;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) _SFPBImage *verifiedGlyph;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (id)dictionaryRepresentation;
- (id)footnote;
- (id)handle;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasFootnote;
- (bool)hasHandle;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasName;
- (bool)hasNameMaxLines;
- (bool)hasNameNoWrap;
- (bool)hasPicture;
- (bool)hasPost;
- (bool)hasProfilePicture;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasTimestamp;
- (bool)hasTopPadding;
- (bool)hasType;
- (bool)hasVerifiedGlyph;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (int)nameMaxLines;
- (bool)nameNoWrap;
- (id)picture;
- (id)post;
- (id)profilePicture;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setFootnote:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameMaxLines:(int)arg1;
- (void)setNameNoWrap:(bool)arg1;
- (void)setPicture:(id)arg1;
- (void)setPost:(id)arg1;
- (void)setProfilePicture:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVerifiedGlyph:(id)arg1;
- (id)timestamp;
- (id)type;
- (id)verifiedGlyph;
- (void)writeTo:(id)arg1;

@end
