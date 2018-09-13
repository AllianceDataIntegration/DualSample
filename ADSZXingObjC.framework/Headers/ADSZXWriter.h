/*
 * Copyright 2012 ADSZXing authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "ADSZXBarcodeFormat.h"

@class ADSZXBitMatrix, ADSZXEncodeHints;

/**
 * The base class for all objects which encode/generate a barcode image.
 */
@protocol ADSZXWriter <NSObject>

/**
 * Encode a barcode using the default settings.
 *
 * @param contents The contents to encode in the barcode
 * @param format The barcode format to generate
 * @param width The preferred width in pixels
 * @param height The preferred height in pixels
 */
- (ADSZXBitMatrix *)encode:(NSString *)contents format:(ADSZXBarcodeFormat)format width:(int)width height:(int)height error:(NSError **)error;

/**
 *
 * @param contents The contents to encode in the barcode
 * @param format The barcode format to generate
 * @param width The preferred width in pixels
 * @param height The preferred height in pixels
 * @param hints Additional parameters to supply to the encoder
 */
- (ADSZXBitMatrix *)encode:(NSString *)contents format:(ADSZXBarcodeFormat)format width:(int)width height:(int)height hints:(ADSZXEncodeHints *)hints error:(NSError **)error;

@end
