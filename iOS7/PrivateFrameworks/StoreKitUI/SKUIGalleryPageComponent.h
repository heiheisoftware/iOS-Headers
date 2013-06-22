/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent
{
    NSArray *_childComponents;
    double _cycleInterval;
    BOOL _hidesPageIndicator;
}

@property(nonatomic) BOOL hidesPageIndicator; // @synthesize hidesPageIndicator=_hidesPageIndicator;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(readonly, nonatomic) NSArray *childComponents; // @synthesize childComponents=_childComponents;
- (void).cxx_destruct;
- (id)metricsElementName;
- (int)componentType;
- (id)initWithCustomPageContext:(id)arg1;

@end
