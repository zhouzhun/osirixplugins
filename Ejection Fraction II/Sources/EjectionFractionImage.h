//
//  EjectionFractionImage.h
//  Ejection Fraction II
//
//  Created by Alessandro Volz on 17.12.09.
//  Copyright 2009 OsiriX Team. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface EjectionFractionImage : NSImage {
	NSArray* _rois;
	NSImage* _pix;
}

@property(retain) NSArray* rois;
@property(retain) NSImage* pix;

+(id)imageWithObjects:(NSArray*)objects;
-(id)initWithObjects:(NSArray*)objects;

@end
