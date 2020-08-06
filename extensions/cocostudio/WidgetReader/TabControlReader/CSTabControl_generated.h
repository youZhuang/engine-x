// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CSTABCONTROL_FLATBUFFERS_H_
#define FLATBUFFERS_GENERATED_CSTABCONTROL_FLATBUFFERS_H_

#include "flatbuffers/flatbuffers.h"

#include "cocostudio/CSParseBinary_generated.h"

namespace flatbuffers {

struct TabControlOption;

struct TabHeaderOption;

struct TabItemOption;

struct TabControlOption FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODEOPTIONS = 4,
    VT_HEADERPLACE = 6,
    VT_HEADERWIDTH = 8,
    VT_HEADERHEIGHT = 10,
    VT_SELECTEDTABZOOM = 12,
    VT_SELECTEDTABINDEX = 14,
    VT_IGNOREHEADERTEXTURESIZE = 16,
    VT_TABITEMS = 18
  };
  const WidgetOptions *nodeOptions() const {
    return GetPointer<const WidgetOptions *>(VT_NODEOPTIONS);
  }
  int32_t headerPlace() const {
    return GetField<int32_t>(VT_HEADERPLACE, 0);
  }
  int32_t headerWidth() const {
    return GetField<int32_t>(VT_HEADERWIDTH, 0);
  }
  int32_t headerHeight() const {
    return GetField<int32_t>(VT_HEADERHEIGHT, 0);
  }
  float selectedTabZoom() const {
    return GetField<float>(VT_SELECTEDTABZOOM, 0.0f);
  }
  int32_t selectedTabIndex() const {
    return GetField<int32_t>(VT_SELECTEDTABINDEX, 0);
  }
  uint8_t ignoreHeaderTextureSize() const {
    return GetField<uint8_t>(VT_IGNOREHEADERTEXTURESIZE, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<TabItemOption>> *tabItems() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TabItemOption>> *>(VT_TABITEMS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODEOPTIONS) &&
           verifier.VerifyTable(nodeOptions()) &&
           VerifyField<int32_t>(verifier, VT_HEADERPLACE) &&
           VerifyField<int32_t>(verifier, VT_HEADERWIDTH) &&
           VerifyField<int32_t>(verifier, VT_HEADERHEIGHT) &&
           VerifyField<float>(verifier, VT_SELECTEDTABZOOM) &&
           VerifyField<int32_t>(verifier, VT_SELECTEDTABINDEX) &&
           VerifyField<uint8_t>(verifier, VT_IGNOREHEADERTEXTURESIZE) &&
           VerifyOffset(verifier, VT_TABITEMS) &&
           verifier.VerifyVector(tabItems()) &&
           verifier.VerifyVectorOfTables(tabItems()) &&
           verifier.EndTable();
  }
};

struct TabControlOptionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_nodeOptions(flatbuffers::Offset<WidgetOptions> nodeOptions) {
    fbb_.AddOffset(TabControlOption::VT_NODEOPTIONS, nodeOptions);
  }
  void add_headerPlace(int32_t headerPlace) {
    fbb_.AddElement<int32_t>(TabControlOption::VT_HEADERPLACE, headerPlace, 0);
  }
  void add_headerWidth(int32_t headerWidth) {
    fbb_.AddElement<int32_t>(TabControlOption::VT_HEADERWIDTH, headerWidth, 0);
  }
  void add_headerHeight(int32_t headerHeight) {
    fbb_.AddElement<int32_t>(TabControlOption::VT_HEADERHEIGHT, headerHeight, 0);
  }
  void add_selectedTabZoom(float selectedTabZoom) {
    fbb_.AddElement<float>(TabControlOption::VT_SELECTEDTABZOOM, selectedTabZoom, 0.0f);
  }
  void add_selectedTabIndex(int32_t selectedTabIndex) {
    fbb_.AddElement<int32_t>(TabControlOption::VT_SELECTEDTABINDEX, selectedTabIndex, 0);
  }
  void add_ignoreHeaderTextureSize(uint8_t ignoreHeaderTextureSize) {
    fbb_.AddElement<uint8_t>(TabControlOption::VT_IGNOREHEADERTEXTURESIZE, ignoreHeaderTextureSize, 0);
  }
  void add_tabItems(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TabItemOption>>> tabItems) {
    fbb_.AddOffset(TabControlOption::VT_TABITEMS, tabItems);
  }
  explicit TabControlOptionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TabControlOptionBuilder &operator=(const TabControlOptionBuilder &);
  flatbuffers::Offset<TabControlOption> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TabControlOption>(end);
    return o;
  }
};

inline flatbuffers::Offset<TabControlOption> CreateTabControlOption(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<WidgetOptions> nodeOptions = 0,
    int32_t headerPlace = 0,
    int32_t headerWidth = 0,
    int32_t headerHeight = 0,
    float selectedTabZoom = 0.0f,
    int32_t selectedTabIndex = 0,
    uint8_t ignoreHeaderTextureSize = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TabItemOption>>> tabItems = 0) {
  TabControlOptionBuilder builder_(_fbb);
  builder_.add_tabItems(tabItems);
  builder_.add_selectedTabIndex(selectedTabIndex);
  builder_.add_selectedTabZoom(selectedTabZoom);
  builder_.add_headerHeight(headerHeight);
  builder_.add_headerWidth(headerWidth);
  builder_.add_headerPlace(headerPlace);
  builder_.add_nodeOptions(nodeOptions);
  builder_.add_ignoreHeaderTextureSize(ignoreHeaderTextureSize);
  return builder_.Finish();
}

inline flatbuffers::Offset<TabControlOption> CreateTabControlOptionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<WidgetOptions> nodeOptions = 0,
    int32_t headerPlace = 0,
    int32_t headerWidth = 0,
    int32_t headerHeight = 0,
    float selectedTabZoom = 0.0f,
    int32_t selectedTabIndex = 0,
    uint8_t ignoreHeaderTextureSize = 0,
    const std::vector<flatbuffers::Offset<TabItemOption>> *tabItems = nullptr) {
  auto tabItems__ = tabItems ? _fbb.CreateVector<flatbuffers::Offset<TabItemOption>>(*tabItems) : 0;
  return flatbuffers::CreateTabControlOption(
      _fbb,
      nodeOptions,
      headerPlace,
      headerWidth,
      headerHeight,
      selectedTabZoom,
      selectedTabIndex,
      ignoreHeaderTextureSize,
      tabItems__);
}

struct TabHeaderOption FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODEOPTIONS = 4,
    VT_FONTRES = 6,
    VT_FONTSIZE = 8,
    VT_TITLETEXT = 10,
    VT_TEXTCOLOR = 12,
    VT_NORMALBACKFILE = 14,
    VT_PRESSBACKFILE = 16,
    VT_DISABLEBACKFILE = 18,
    VT_CROSSNORMALFILE = 20,
    VT_CROSSDISABLEFILE = 22
  };
  const WidgetOptions *nodeOptions() const {
    return GetPointer<const WidgetOptions *>(VT_NODEOPTIONS);
  }
  const ResourceData *fontRes() const {
    return GetPointer<const ResourceData *>(VT_FONTRES);
  }
  int32_t fontSize() const {
    return GetField<int32_t>(VT_FONTSIZE, 0);
  }
  const flatbuffers::String *titleText() const {
    return GetPointer<const flatbuffers::String *>(VT_TITLETEXT);
  }
  const Color *textColor() const {
    return GetStruct<const Color *>(VT_TEXTCOLOR);
  }
  const ResourceData *normalBackFile() const {
    return GetPointer<const ResourceData *>(VT_NORMALBACKFILE);
  }
  const ResourceData *pressBackFile() const {
    return GetPointer<const ResourceData *>(VT_PRESSBACKFILE);
  }
  const ResourceData *disableBackFile() const {
    return GetPointer<const ResourceData *>(VT_DISABLEBACKFILE);
  }
  const ResourceData *crossNormalFile() const {
    return GetPointer<const ResourceData *>(VT_CROSSNORMALFILE);
  }
  const ResourceData *crossDisableFile() const {
    return GetPointer<const ResourceData *>(VT_CROSSDISABLEFILE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODEOPTIONS) &&
           verifier.VerifyTable(nodeOptions()) &&
           VerifyOffset(verifier, VT_FONTRES) &&
           verifier.VerifyTable(fontRes()) &&
           VerifyField<int32_t>(verifier, VT_FONTSIZE) &&
           VerifyOffset(verifier, VT_TITLETEXT) &&
           verifier.VerifyString(titleText()) &&
           VerifyField<Color>(verifier, VT_TEXTCOLOR) &&
           VerifyOffset(verifier, VT_NORMALBACKFILE) &&
           verifier.VerifyTable(normalBackFile()) &&
           VerifyOffset(verifier, VT_PRESSBACKFILE) &&
           verifier.VerifyTable(pressBackFile()) &&
           VerifyOffset(verifier, VT_DISABLEBACKFILE) &&
           verifier.VerifyTable(disableBackFile()) &&
           VerifyOffset(verifier, VT_CROSSNORMALFILE) &&
           verifier.VerifyTable(crossNormalFile()) &&
           VerifyOffset(verifier, VT_CROSSDISABLEFILE) &&
           verifier.VerifyTable(crossDisableFile()) &&
           verifier.EndTable();
  }
};

struct TabHeaderOptionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_nodeOptions(flatbuffers::Offset<WidgetOptions> nodeOptions) {
    fbb_.AddOffset(TabHeaderOption::VT_NODEOPTIONS, nodeOptions);
  }
  void add_fontRes(flatbuffers::Offset<ResourceData> fontRes) {
    fbb_.AddOffset(TabHeaderOption::VT_FONTRES, fontRes);
  }
  void add_fontSize(int32_t fontSize) {
    fbb_.AddElement<int32_t>(TabHeaderOption::VT_FONTSIZE, fontSize, 0);
  }
  void add_titleText(flatbuffers::Offset<flatbuffers::String> titleText) {
    fbb_.AddOffset(TabHeaderOption::VT_TITLETEXT, titleText);
  }
  void add_textColor(const Color *textColor) {
    fbb_.AddStruct(TabHeaderOption::VT_TEXTCOLOR, textColor);
  }
  void add_normalBackFile(flatbuffers::Offset<ResourceData> normalBackFile) {
    fbb_.AddOffset(TabHeaderOption::VT_NORMALBACKFILE, normalBackFile);
  }
  void add_pressBackFile(flatbuffers::Offset<ResourceData> pressBackFile) {
    fbb_.AddOffset(TabHeaderOption::VT_PRESSBACKFILE, pressBackFile);
  }
  void add_disableBackFile(flatbuffers::Offset<ResourceData> disableBackFile) {
    fbb_.AddOffset(TabHeaderOption::VT_DISABLEBACKFILE, disableBackFile);
  }
  void add_crossNormalFile(flatbuffers::Offset<ResourceData> crossNormalFile) {
    fbb_.AddOffset(TabHeaderOption::VT_CROSSNORMALFILE, crossNormalFile);
  }
  void add_crossDisableFile(flatbuffers::Offset<ResourceData> crossDisableFile) {
    fbb_.AddOffset(TabHeaderOption::VT_CROSSDISABLEFILE, crossDisableFile);
  }
  explicit TabHeaderOptionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TabHeaderOptionBuilder &operator=(const TabHeaderOptionBuilder &);
  flatbuffers::Offset<TabHeaderOption> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TabHeaderOption>(end);
    return o;
  }
};

inline flatbuffers::Offset<TabHeaderOption> CreateTabHeaderOption(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<WidgetOptions> nodeOptions = 0,
    flatbuffers::Offset<ResourceData> fontRes = 0,
    int32_t fontSize = 0,
    flatbuffers::Offset<flatbuffers::String> titleText = 0,
    const Color *textColor = 0,
    flatbuffers::Offset<ResourceData> normalBackFile = 0,
    flatbuffers::Offset<ResourceData> pressBackFile = 0,
    flatbuffers::Offset<ResourceData> disableBackFile = 0,
    flatbuffers::Offset<ResourceData> crossNormalFile = 0,
    flatbuffers::Offset<ResourceData> crossDisableFile = 0) {
  TabHeaderOptionBuilder builder_(_fbb);
  builder_.add_crossDisableFile(crossDisableFile);
  builder_.add_crossNormalFile(crossNormalFile);
  builder_.add_disableBackFile(disableBackFile);
  builder_.add_pressBackFile(pressBackFile);
  builder_.add_normalBackFile(normalBackFile);
  builder_.add_textColor(textColor);
  builder_.add_titleText(titleText);
  builder_.add_fontSize(fontSize);
  builder_.add_fontRes(fontRes);
  builder_.add_nodeOptions(nodeOptions);
  return builder_.Finish();
}

inline flatbuffers::Offset<TabHeaderOption> CreateTabHeaderOptionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<WidgetOptions> nodeOptions = 0,
    flatbuffers::Offset<ResourceData> fontRes = 0,
    int32_t fontSize = 0,
    const char *titleText = nullptr,
    const Color *textColor = 0,
    flatbuffers::Offset<ResourceData> normalBackFile = 0,
    flatbuffers::Offset<ResourceData> pressBackFile = 0,
    flatbuffers::Offset<ResourceData> disableBackFile = 0,
    flatbuffers::Offset<ResourceData> crossNormalFile = 0,
    flatbuffers::Offset<ResourceData> crossDisableFile = 0) {
  auto titleText__ = titleText ? _fbb.CreateString(titleText) : 0;
  return flatbuffers::CreateTabHeaderOption(
      _fbb,
      nodeOptions,
      fontRes,
      fontSize,
      titleText__,
      textColor,
      normalBackFile,
      pressBackFile,
      disableBackFile,
      crossNormalFile,
      crossDisableFile);
}

struct TabItemOption FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_HEADER = 4,
    VT_CONTAINER = 6
  };
  const TabHeaderOption *header() const {
    return GetPointer<const TabHeaderOption *>(VT_HEADER);
  }
  const NodeTree *container() const {
    return GetPointer<const NodeTree *>(VT_CONTAINER);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyOffset(verifier, VT_CONTAINER) &&
           verifier.VerifyTable(container()) &&
           verifier.EndTable();
  }
};

struct TabItemOptionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<TabHeaderOption> header) {
    fbb_.AddOffset(TabItemOption::VT_HEADER, header);
  }
  void add_container(flatbuffers::Offset<NodeTree> container) {
    fbb_.AddOffset(TabItemOption::VT_CONTAINER, container);
  }
  explicit TabItemOptionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TabItemOptionBuilder &operator=(const TabItemOptionBuilder &);
  flatbuffers::Offset<TabItemOption> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TabItemOption>(end);
    return o;
  }
};

inline flatbuffers::Offset<TabItemOption> CreateTabItemOption(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<TabHeaderOption> header = 0,
    flatbuffers::Offset<NodeTree> container = 0) {
  TabItemOptionBuilder builder_(_fbb);
  builder_.add_container(container);
  builder_.add_header(header);
  return builder_.Finish();
}

inline const flatbuffers::TabControlOption *GetTabControlOption(const void *buf) {
  return flatbuffers::GetRoot<flatbuffers::TabControlOption>(buf);
}

inline const flatbuffers::TabControlOption *GetSizePrefixedTabControlOption(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<flatbuffers::TabControlOption>(buf);
}

inline bool VerifyTabControlOptionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<flatbuffers::TabControlOption>(nullptr);
}

inline bool VerifySizePrefixedTabControlOptionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<flatbuffers::TabControlOption>(nullptr);
}

inline void FinishTabControlOptionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<flatbuffers::TabControlOption> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTabControlOptionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<flatbuffers::TabControlOption> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flatbuffers

#endif  // FLATBUFFERS_GENERATED_CSTABCONTROL_FLATBUFFERS_H_