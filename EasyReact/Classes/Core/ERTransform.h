/**
 * Beijing Sankuai Online Technology Co.,Ltd (Meituan)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **/

@class ERSenderList;

NS_ASSUME_NONNULL_BEGIN

@class ERNode, ERTransformGroup;
@interface ERTransform : NSObject

@property (nonatomic, readwrite, copy, nullable) NSString *name;
@property (atomic, readonly, unsafe_unretained, nullable) ERNode *from;
@property (atomic, readonly, unsafe_unretained, nullable) ERNode *to;

- (void)next:(nullable id)value from:(ERSenderList *)senderList;
- (void)linkNode:(ERNode *)fromNode to:(ERNode *)toNode;
- (void)breakLinking;

@end

NS_ASSUME_NONNULL_END
