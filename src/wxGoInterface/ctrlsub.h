class wxItemContainerImmutable
{
public:
    wxItemContainerImmutable();
    virtual unsigned int GetCount() const = 0;
    bool IsEmpty() const;
    virtual wxString GetString(unsigned int n) const = 0;
    wxArrayString GetStrings() const;
    virtual void SetString(unsigned int n, const wxString& string) = 0;
    virtual int FindString(const wxString& string, bool caseSensitive = false) const;
    virtual void SetSelection(int n) = 0;
    virtual int GetSelection() const = 0;
    bool SetStringSelection(const wxString& string);
    virtual wxString GetStringSelection() const;
    void Select(int n);
};
class wxItemContainer : public wxItemContainerImmutable
{
public:
    int Append(const wxString& item);
    int Append(const wxString& item, void* clientData);
    int Append(const wxString& item, wxClientData* clientData);
    int Append(const wxArrayString& items);
    int Append(const wxArrayString& items, void **clientData);
    int Append(const wxArrayString& items, wxClientData **clientData);
    int Append(unsigned int n, const wxString* items);
    int Append(unsigned int n, const wxString* items,
               void** clientData);
    int Append(unsigned int n, const wxString* items,
                wxClientData** clientData);
    void Clear();
    void Delete(unsigned int n);
    wxClientData *DetachClientObject(unsigned int n);
    bool HasClientData() const;
    bool HasClientObjectData() const;
    bool HasClientUntypedData() const;
    void* GetClientData(unsigned int n) const;
    wxClientData* GetClientObject(unsigned int n) const;
    void SetClientData(unsigned int n, void* data);
    void SetClientObject(unsigned int n, wxClientData* data);
    int Insert(const wxString& item, unsigned int pos);
    int Insert(const wxString& item, unsigned int pos, void* clientData);
    int Insert(const wxString& item, unsigned int pos,
               wxClientData* clientData);
    int Insert(const wxArrayString& items, unsigned int pos);
    int Insert(const wxArrayString& items, unsigned int pos,
                void **clientData);
    int Insert(const wxArrayString& items, unsigned int pos,
                wxClientData **clientData);
    int Insert(unsigned int n, const wxString* items,
                unsigned int pos);
    int Insert(unsigned int n, const wxString* items,
                unsigned int pos,
                void** clientData);
    int Insert(unsigned int n, const wxString* items,
                unsigned int pos,
                wxClientData** clientData);
    void Set(const wxArrayString& items);
    void Set(const wxArrayString& items, void **clientData);
    void Set(const wxArrayString& items, wxClientData **clientData);
    void Set(unsigned int n, const wxString* items);
    void Set(unsigned int n, const wxString* items, void** clientData);
    void Set(unsigned int n, const wxString* items, wxClientData** clientData);
};