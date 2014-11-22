//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long location;
    unsigned long long length;
} CDStruct_91ee6ea3;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/HexEditor.ideplugin/Contents/MacOS/HexEditor
// UUID: 0656D22C-E53F-332E-8505-96D53CC3A53F
//
//                           Arch: x86_64
//                Current version: 6244.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6244.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol DVTFindBarFindable

@optional
- (struct _NSRange)selectedRangeForFindBar:(DVTFindBar *)arg1;
- (DVTDocumentLocation *)startingLocationForFindBar:(DVTFindBar *)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didUpdateCurrentResult:(DVTFindResult *)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didUpdateResults:(NSArray *)arg2;
@end

@protocol DVTTextFindable <NSObject>
- (DVTFindResult *)findStringMatchingDescriptor:(DVTFindDescriptor *)arg1 backwards:(BOOL)arg2 from:(DVTDocumentLocation *)arg3 to:(DVTDocumentLocation *)arg4;

@optional
@property unsigned long long supportedMatchingOptions;
- (long long)compareFindableLocation:(DVTDocumentLocation *)arg1 withLocation:(DVTDocumentLocation *)arg2;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@interface IDEHexEditor : IDEEditor <DVTTextFindable, DVTFindBarFindable>
{
    IDEHexEditorViewController *_hexEditorViewController;
    DVTReplacementView *_hexEditorReplacementView;
}

@property(retain) DVTReplacementView *hexEditorReplacementView; // @synthesize hexEditorReplacementView=_hexEditorReplacementView;
@property(retain) IDEHexEditorViewController *hexEditorViewController; // @synthesize hexEditorViewController=_hexEditorViewController;
- (void).cxx_destruct;
- (void)setStateToken:(id)arg1;
- (void)byteGrouping32:(id)arg1;
- (void)byteGrouping16:(id)arg1;
- (void)byteGrouping8:(id)arg1;
- (void)byteGrouping4:(id)arg1;
- (void)byteGrouping2:(id)arg1;
- (void)byteGroupingNone:(id)arg1;
- (void)plainText:(id)arg1;
- (void)hexadecimal:(id)arg1;
- (void)lineNumbers:(id)arg1;
- (void)extendSelection:(id)arg1;
- (void)moveSelection:(id)arg1;
- (void)toggleOverwriteMode:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

@interface IDEHexEditorDocument : IDEEditorDocument
{
    HFByteArray *_byteArray;
}

+ (BOOL)isNativeType:(id)arg1;
@property(readonly) HFByteArray *byteArray; // @synthesize byteArray=_byteArray;
- (void).cxx_destruct;
- (id)ideTopLevelStructureObjects;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)canSave;

@end

@interface IDEHexEditorDocumentLocation : DVTDocumentLocation
{
    CDStruct_91ee6ea3 _range;
}

- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 range:(CDStruct_91ee6ea3)arg2;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 range:(CDStruct_91ee6ea3)arg3;
- (void)setRange:(CDStruct_91ee6ea3)arg1;
- (CDStruct_91ee6ea3)range;

@end

@interface IDEHexEditorNavigable : NSObject
{
    CDStruct_91ee6ea3 _range;
    IDEHexEditorDocument *_document;
}

@property(retain) IDEHexEditorDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
- (id)navigableItem_fileReference;
- (id)navigableItem_documentType;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (id)navigableItem_contentDocumentLocation;
- (void)setRange:(CDStruct_91ee6ea3)arg1;
- (CDStruct_91ee6ea3)range;

@end

@interface IDEHexEditorViewController : IDEViewController <DVTTextFindable, DVTFindBarFindable>
{
    HFTextView *_hexView;
    HFLineCountingRepresenter *_lineNumberRepresenter;
    HFHexTextRepresenter *_hexRepresenter;
    HFStringEncodingTextRepresenter *_textRepresenter;
    DVTObservingToken *_stateChangeObserverToken;
    BOOL _haveRegisteredClassSpecificDefaults;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)defaultLineNumberFormat;
+ (id)lineNumberFormatStateKey;
+ (void)initialize;
@property(readonly) HFStringEncodingTextRepresenter *textRepresenter; // @synthesize textRepresenter=_textRepresenter;
@property(readonly) HFHexTextRepresenter *hexRepresenter; // @synthesize hexRepresenter=_hexRepresenter;
@property(readonly) HFLineCountingRepresenter *lineNumberRepresenter; // @synthesize lineNumberRepresenter=_lineNumberRepresenter;
@property(readonly) HFTextView *hexView; // @synthesize hexView=_hexView;
- (void).cxx_destruct;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
@property(readonly) NSString *stateSavingIdentifier;
- (void)_setRepresenter:(id)arg1 showing:(BOOL)arg2 ensureHexOrPlainTextIsShowing:(BOOL)arg3;
- (void)_setRepresenter:(id)arg1 showing:(BOOL)arg2;
- (BOOL)_isRepresenterShowing:(id)arg1;
@property(nonatomic) BOOL plainTextVisible;
@property(nonatomic) BOOL hexVisible;
@property(nonatomic) BOOL lineNumbersVisible;
@property(readonly) HFLayoutRepresenter *layoutRepresenter;
@property(readonly) HFController *controller;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (id)_interpretStringAsHexBytes:(id)arg1;
- (void)_appendBytesFromString:(id)arg1 to:(id)arg2;
- (long long)_nibbleFromCharacter:(unsigned short)arg1;
- (BOOL)_isSearchResultRangeValid:(struct _NSRange)arg1;
- (BOOL)_isSearchResultValid:(unsigned long long)arg1;
- (struct _NSRange)_findData:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3;
- (struct _NSRange)_findStringAsHex:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3;
- (struct _NSRange)_findStringAsText:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3;
- (struct _NSRange)_findString:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)setLineNumberFormat:(unsigned long long)arg1;
- (void)setStartingLineNumber:(unsigned long long)arg1;
@property unsigned long long bytesPerColumn;
- (id)_representerForClass:(Class)arg1;
- (void)takeFocus;
- (void)_storeLineNumberFormatPreference:(id)arg1;
- (void)_restorePreferences;
- (id)_createLineCounterRepresenter;
- (void)_registerClassSpecificDefaults;
@property unsigned long long supportedMatchingOptions;
- (void)_themeColorsUpdated;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
