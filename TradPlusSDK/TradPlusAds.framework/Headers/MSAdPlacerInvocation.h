#import <Foundation/Foundation.h>

@class MSStreamAdPlacer;

@interface MSAdPlacerInvocation : NSObject

/**
 * Creates an NSInvocation object with the given parameters and invokes the object.
 * This will return nil if there is an ad at the index path or the target doesn't respond to the selector.
 *
 * @param target The object's original data source or delegate.
 * @param with2ArgSelector The method we want to execute on the target if an ad doesn't exist.
 * @param firstArg The first argument to the selector.
 * @param secondArg The second argument to the selector.
 * @param streamAdPlacer The MSStreamAdPlacer backing your UI collection that can translate index paths to their originals.
 *
 * @return The invocation with all the parameters passed into the method.
 */
+ (NSInvocation *)invokeForTarget:(id)target
                 with2ArgSelector:(SEL)selector
                         firstArg:(id)arg1
                        secondArg:(NSIndexPath *)indexPath
                   streamAdPlacer:(MSStreamAdPlacer *)streamAdPlacer;

/**
 * Creates an NSInvocation object with the given parameters and invokes the object.
 * This will return nil if there is an ad at the index path or the target doesn't respond to the selector.
 *
 * @param target The object's original data source or delegate.
 * @param with3ArgSelector The method we want to execute on the target if an ad doesn't exist.
 * @param firstArg The first argument to the selector.
 * @param secondArg The second argument to the selector.
 * @param thirdArg The third argument to the selector.
 * @param streamAdPlacer The MSStreamAdPlacer backing your UI collection that can translate index paths to their originals.
 *
 * @return The invocation with all the parameters passed into the method.
 */
+ (NSInvocation *)invokeForTarget:(id)target
                 with3ArgSelector:(SEL)selector
                         firstArg:(id)arg1
                        secondArg:(id)arg2
                         thirdArg:(NSIndexPath *)indexPath
                   streamAdPlacer:(MSStreamAdPlacer *)streamAdPlacer;

/**
 * Creates an NSInvocation object with the given parameters and invokes the object.
 * This will return nil if there is an ad at the index path or the target doesn't respond to the selector.
 *
 * @param target The object's original data source or delegate.
 * @param with3ArgSelector The method we want to execute on the target if an ad doesn't exist.
 * @param firstArg The first argument to the selector.
 * @param secondArg The second argument to the selector.
 * @param thirdArg The third argument to the selector.
 * @param streamAdPlacer The MSStreamAdPlacer backing your UI collection that can translate index paths to their originals.
 *
 * @return The invocation with all the parameters passed into the method.
 */
+ (NSInvocation *)invokeForTarget:(id)target
              with3ArgIntSelector:(SEL)selector
                         firstArg:(id)arg1
                        secondArg:(NSInteger)arg2
                         thirdArg:(NSIndexPath *)indexPath
                   streamAdPlacer:(MSStreamAdPlacer *)streamAdPlacer;

/**
 * Returns the result for an invocation.  Will return defaultReturnValue if invocation is nil.
 *
 * @param invocation The invocation that was returned from invokeForTarget:.
 * @param defaultReturnValue What to return when the invocation is nil.
 *
 * @return defaultReturnValue or the invocation's return value.
 */
+ (BOOL)boolResultForInvocation:(NSInvocation *)invocation defaultValue:(BOOL)defaultReturnValue;

/**
 * Returns the result for an invocation.  Will return defaultReturnValue if invocation is nil.
 *
 * @param invocation The invocation that was returned from invokeForTarget:.
 * @param defaultReturnValue What to return when the invocation is nil.
 *
 * @return defaultReturnValue or the invocation's return value.
 */
+ (NSInteger)integerResultForInvocation:(NSInvocation *)invocation defaultValue:(NSInteger)defaultReturnValue;

/**
 * Returns the result for an invocation.  Will return defaultReturnValue if invocation is nil.
 *
 * @param invocation The invocation that was returned from invokeForTarget:.
 * @param defaultReturnValue What to return when the invocation is nil.
 *
 * @return defaultReturnValue or the invocation's return value.
 */
+ (id)resultForInvocation:(NSInvocation *)invocation defaultValue:(id)defaultReturnValue;

@end
