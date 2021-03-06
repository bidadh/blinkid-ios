//
//  PPCzIDBackRecognizerSettings.h
//  BlinkIdFramework
//
//  Created by Dino on 30/06/16.
//  Copyright © 2016 MicroBlink Ltd. All rights reserved.
//

#import "PPRecognizerSettings.h"

/**
 * Settings class for configuring Czech Back ID Recognizer.
 *
 * Czech Back ID recognizer is used for scanning back side of Czech ID.
 */
PP_CLASS_AVAILABLE_IOS(6.0)
@interface PPCzIDBackRecognizerSettings : PPRecognizerSettings

/**
 * Name of the image sent to didOutputMetadata method of scanDelegate object that contains full document.
 * This image will be sent to scan delegate during recognition process if displaying of full document image
 * is enabled via displayFullDocumentImage property and receiving of dewarpedImage in MetadataSettings is enabled.
 */
+ (NSString *)FULL_DOCUMENT_IMAGE;

/**
 * Sets whether full image of ID card should be sent to didOutputMetadata method of scanDelegate object.
 * If you want to recieve this image, be sure to enable dewarpedImage in MetadataSettings.
 *
 * Default: NO
 */
@property (nonatomic) BOOL displayFullDocumentImage;

/**
 * Defines if citizenship of Czech ID authority should be extracted
 *
 * Default: YES
 */
@property (nonatomic, assign) BOOL extractAuthority;

/**
 * Defines if address of Czech ID owner should be extracted
 *
 * Default: YES
 */
@property (nonatomic, assign) BOOL extractAddress;

/**
 * Defines if personal number should be extracted from Czech ID
 *
 * Default: YES
 */
@property (nonatomic, assign) BOOL extractPersonalNumber;

/**
 * Defines if glare detection should be turned on/off for back side of Czech IDs.
 *
 * Default: YES
 */
@property (nonatomic, assign) BOOL detectGlare;

@end
