/*
 * Copyright 2013 ADSZXing authors
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

#import "ADSZXEncodeHints.h"

@class ADSZXDimension;

/**
 * Symbol info table for DataMatrix.
 */
@interface ADSZXDataMatrixSymbolInfo : NSObject

@property (nonatomic, assign, readonly) BOOL rectangular;
@property (nonatomic, assign, readonly) int errorCodewords;
@property (nonatomic, assign, readonly) int dataCapacity;
@property (nonatomic, assign, readonly) int dataRegions;
@property (nonatomic, assign, readonly) int matrixWidth;
@property (nonatomic, assign, readonly) int matrixHeight;
@property (nonatomic, assign, readonly) int rsBlockData;
@property (nonatomic, assign, readonly) int rsBlockError;

/**
 * Overrides the symbol info set used by this class. Used for testing purposes.
 *
 * @param override the symbol info set to use
 */
+ (void)overrideSymbolSet:(NSArray *)override;
+ (NSArray *)prodSymbols;
- (id)initWithRectangular:(BOOL)rectangular dataCapacity:(int)dataCapacity errorCodewords:(int)errorCodewords
              matrixWidth:(int)matrixWidth matrixHeight:(int)matrixHeight dataRegions:(int)dataRegions;
- (id)initWithRectangular:(BOOL)rectangular dataCapacity:(int)dataCapacity errorCodewords:(int)errorCodewords
              matrixWidth:(int)matrixWidth matrixHeight:(int)matrixHeight dataRegions:(int)dataRegions
              rsBlockData:(int)rsBlockData rsBlockError:(int)rsBlockError;
+ (ADSZXDataMatrixSymbolInfo *)lookup:(int)dataCodewords;
+ (ADSZXDataMatrixSymbolInfo *)lookup:(int)dataCodewords shape:(ADSZXDataMatrixSymbolShapeHint)shape;
+ (ADSZXDataMatrixSymbolInfo *)lookup:(int)dataCodewords allowRectangular:(BOOL)allowRectangular fail:(BOOL)fail;
+ (ADSZXDataMatrixSymbolInfo *)lookup:(int)dataCodewords shape:(ADSZXDataMatrixSymbolShapeHint)shape fail:(BOOL)fail;
+ (ADSZXDataMatrixSymbolInfo *)lookup:(int)dataCodewords shape:(ADSZXDataMatrixSymbolShapeHint)shape minSize:(ADSZXDimension *)minSize maxSize:(ADSZXDimension *)maxSize fail:(BOOL)fail;
- (int)horizontalDataRegions;
- (int)verticalDataRegions;
- (int)symbolDataWidth;
- (int)symbolDataHeight;
- (int)symbolWidth;
- (int)symbolHeight;
- (int)codewordCount;
- (int)interleavedBlockCount;
- (int)dataLengthForInterleavedBlock:(int)index;
- (int)errorLengthForInterleavedBlock:(int)index;

@end