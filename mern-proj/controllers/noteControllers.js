const Note = require("../models/Note");

exports.createNote = async (req, res) => {
  try {
    const note = new Note({ ...req.body, studentId: req.student });
    await note.save();
    res.json(note);
  } catch (err) {
    res.status(500).json({ msg: err.message });
  }
};

exports.getNotes = async (req, res) => {
  try {
    const notes = await Note.find({ studentId: req.student });
    res.json(notes);
  } catch (err) {
    res.status(500).json({ msg: err.message });
  }
};

exports.updateNote = async (req, res) => {
  try {
    const note = await Note.findByIdAndUpdate(req.params.id, req.body, { new: true });
    res.json(note);
  } catch (err) {
    res.status(500).json({ msg: err.message });
  }
};

exports.deleteNote = async (req, res) => {
  try {
    await Note.findByIdAndDelete(req.params.id);
    res.json({ msg: "Note deleted" });
  } catch (err) {
    res.status(500).json({ msg: err.message });
  }
};
