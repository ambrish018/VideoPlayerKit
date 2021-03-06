/* Copyright (C) 2012 IGN Entertainment, Inc. */

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <MediaPlayer/MediaPlayer.h>
#import "AirplayActiveView.h"

@interface VideoPlayerView : UIView {
    BOOL _fullscreen;
}

@property (readwrite) CGFloat padding;
@property (readonly, strong) UILabel *titleLabel;
@property (readonly, strong) AirplayActiveView *airplayIsActiveView;
@property (readonly, strong) UIView *playerControlBar;
@property (readonly, strong) UIButton *playPauseButton;
@property (readonly, strong) UIButton *fullScreenButton;
@property (nonatomic, readwrite, strong) UIButton *customButton;
@property (nonatomic, readwrite, strong) UILabel *stats;
@property (nonatomic, readwrite, strong) UILabel *extraStats;
@property (readonly, strong) UISlider *videoScrubber;
@property (readonly, strong) UILabel *currentPositionLabel;
@property (readonly, strong) UILabel *timeLeftLabel;
@property (readonly, strong) UIProgressView *progressView;
@property (readonly, strong) UIButton *shareButton;
@property (readwrite) UIEdgeInsets controlsEdgeInsets;
@property (nonatomic, readwrite, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic, readonly, strong) UIToolbar *statusBarOverlay;

@property (readonly, strong) UIActivityIndicatorView *activityIndicator;

- (void)setTitle:(NSString *)title;
- (CGFloat)heightForWidth:(CGFloat)width;
- (void)setPlayer:(AVPlayer *)player;

@end
