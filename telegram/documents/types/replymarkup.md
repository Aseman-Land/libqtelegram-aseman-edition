# ReplyMarkup

## Types

* [typeReplyKeyboardHide](#replymarkuptypereplykeyboardhide)
* [typeReplyKeyboardForceReply](#replymarkuptypereplykeyboardforcereply)
* [typeReplyKeyboardMarkup](#replymarkuptypereplykeyboardmarkup)

## ReplyMarkup::typeReplyKeyboardHide

#### Schema:

`replyKeyboardHide#a03e5b85 flags:# selective:flags.2?true = ReplyMarkup;`

#### Parameters:

|Name|Type|
|----|----|
|selective|bool|

## ReplyMarkup::typeReplyKeyboardForceReply

#### Schema:

`replyKeyboardForceReply#f4108aa0 flags:# single_use:flags.1?true selective:flags.2?true = ReplyMarkup;`

#### Parameters:

|Name|Type|
|----|----|
|singleUse|bool|
|selective|bool|

## ReplyMarkup::typeReplyKeyboardMarkup

#### Schema:

`replyKeyboardMarkup#3502758c flags:# resize:flags.0?true single_use:flags.1?true selective:flags.2?true rows:Vector<KeyboardButtonRow> = ReplyMarkup;`

#### Parameters:

|Name|Type|
|----|----|
|resize|bool|
|singleUse|bool|
|selective|bool|
|rows|QList<KeyboardButtonRow>|

